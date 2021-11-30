#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	{
		int a, b;
		cout << "Task 1.\nEnter 2 numbers: ";
		cin >> a >>  b;
		printf("A > 2 and B <= 3: ");
		if ((a > 2) && (b <= 3)) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	{
		int a, b, c;
		cout << "\nTask 2.\nEnter 3 numbers a, b, c: ";
		cin >> a >> b >> c;
		printf("A < B < C: ");
		if (a < b && b < c) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	{
		int a, b;
		cout << "\nTask 3.\nEnter a number: ";
		cin >> a;
		b = to_string(a).length();
		printf("This number is 2-digit and even: ");
		if (b == 2 && a % 2 == 0) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	{
		printf("\nTask 4.\nEnter 3-digit number: ");
		int a;
		do {
			cin >> a;
		} while (not(a >= 100 && a < 1000));
		string num = to_string(a);
		printf("Digits of this number are creating increasing or decreasing progression: ");
		if ((stoi(to_string(num[0])) < stoi(to_string(num[1])) && stoi(to_string(num[1])) < stoi(to_string(num[2]))) || (stoi(to_string(num[0])) > stoi(to_string(num[1])) && stoi(to_string(num[1])) > stoi(to_string(num[2])))) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	{
		printf("\nTask 5.\nEnter 4-digit number: ");
		int a, b, d, num;
		do {
			cin >> a;
		} while (to_string(a).length() != 4);
		b = a;
		d = 3;
		num = 0;
		while (b > 1) {
			num += int(pow(10, d) * (b % 10));
			d -= 1;
			b /= 10;
		}
		if (a == num)
		{
			printf("This is a palindrome.\n");
		}
		else
		{
			printf("This is not a palindrome.\n");
		}
	}
	{
		int a, b, c;
		cout << "\nTask 6.\nEnter 3 numbers a, b, c (sides of triangle): ";
		do {
			cin >> a >> b >> c;
		} while (not((a > 0 && b > 0 && c > 0)));
		printf("This is right triangle: ");
		if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	{
		int a, b, c;
		cout << "\nTask 7.\nEnter a, b, c (sides of triangle): ";
		do {
			cin >> a >> b >> c;
		} while (not((a > 0 && b > 0 && c > 0)));
		printf("Triangle with these sides exists: ");
		if ((a + b > c) && (a + c > b) && (b + c > a)) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}
}