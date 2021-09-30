#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
	{
		printf("Task 1.\nEnter size of file in bytes: \n");
		int b;
		cin >> b;
		cout << "Size of file in kilobytes: " << b / 1024 << endl;
	}
	{
		printf("Task 2.\nEnter A, B (A > B): \n");
		int a, b;
		do {
			cin >> a >> b;
		} while (a < b);
		cout << "B in A: " << a / b << endl;
	}
	{
		printf("Task 3.\nEnter A, B (A > B): \n");
		int a, b;
		do {
			cin >> a >> b;
		} while (a < b);
		cout << "\nRemaining distance in A: " << a%b << endl;
	}
	{
		printf("Task 4.\nEnter a number (10 <= n < 100) to swap: ");
		int num;
		do {
			cin >> num;
		} while (not((num >= 10) && (num < 100)));
		string num2 = to_string(num);
		if (to_string(num2[1]) == to_string(0)) {
			num2 = num2[0];
		}
		else {
			swap(num2[0], num2[1]);
		}
		cout << "\nBefore: " << num << "\nAfter: " << num2 << endl;
	}
	{
		printf("Task 5.\nEnter a number (100 <= n < 1000): ");
		int num;
		do {
			cin >> num;
		} while (not((num >= 100) && (num < 1000)));
		string num2 = to_string(num);
		swap(num2[0], num2[2]);
		swap(num2[0], num2[1]);
		if (to_string(num2[0]) == ("0")) {
			if (to_string(num2[1]) == "0") {
				num2 = num2[2];
			}
			else {
				num2 = num2[1] + num2[2];
			}
		}
		cout << "\nBefore: " << num << "\nAfter: " << num2 << endl;
	}
}