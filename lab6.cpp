#include <iostream>
#include <cmath>
using namespace std;

int main() {
	{
		printf("Task 1.\n Enter 2 numbers to swap: \n");
		int a, b, c;
		cout << "A: ";
		cin >> a;
		cout << "B: ";
		cin >> b;
		cout << "Before a, b: " << a << " " << b << endl;
		c = b;
		b = a;
		a = c;
		cout << "After a, b: " << a << " " << b << endl;
	}
	{
		printf("Task 2.\nEnter A, B, C to swap(A -> B, B -> C, C -> A): \n");
		int a, b, c;
		cout << "A: ";
		cin >> a;
		cout << "B: ";
		cin >> b;
		cout << "C: ";
		cin >> c;
		cout << "Before A, B, C: " << a << " " << b << " " << c << endl;
		swap(a, b);
		swap(a, c);
		cout << "After A, B, C: " << a << " " << b << " " << c << endl;
	}
	{
		printf("Task 3.\nEnter A, B, C to swap (A -> C, C -> B, B -> A): \n");
		int a, b, c;
		cout << "A: ";
		cin >> a;
		cout << "B: ";
		cin >> b;
		cout << "C: ";
		cin >> c;
		cout << "Before A, B, C: " << a << " " << b << " " << c << endl;
		swap(a, c);
		swap(a, b);
		cout << "After A, B, C: " << a << " " << b << " " << c << endl;
	}
	{
		printf("Task 4.\nEnter x: \n");
		int x, y;
		cout << "x = ";
		cin >> x;
		y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
		cout << "y = 3x^6 - 6x^2 - 7;\ny = " << y << endl;
	}
	{
		printf("Task 5.\nEnter x: \n");
		int x, y;
		cout << "x = ";
		cin >> x;
		y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
		cout << "4(x-3)^6 - 7(x-3)^3 + 2\ny = " << y << endl;
	}
	{
		printf("Task 6.\nEnter number to count number^8: ");
		int a, b, c;
		cout << "a = ";
		cin >> a;
		c = a * a; // c = 2
		b = c; // b = 2
		c = c * b; // c = 4
		b = c; // b = 4
		c = c * b; // c = 8
		cout << "a = " << c;
	}
	{
		printf("Task 7.\nEnter number to count number^15: ");
		int a, b, c, d;
		cout << "a = ";
		cin >> a;
		c = a * a * a; //c =  3
		b = c; // b = 3
		d = c; // d = 3
		c = c * b; // c = 6
		b = c; // b = 6
		c = c * b; // c = 12
		c = c * d; // c = 15
		cout << "a = " << c;
	}
}