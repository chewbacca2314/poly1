#include <iostream>
#include <cmath>
using namespace std;

int main() {
	{
		printf("Task 1.\nEnter 2 numbers to swap: \n");
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
		printf("\nTask 2.\nEnter A, B, C to swap(A -> B, B -> C, C -> A): \n");
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
		printf("\nTask 3.\nEnter A, B, C to swap (A -> C, C -> B, B -> A): \n");
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
		printf("\nTask 4.\nEnter x for \"y = 3x^6 - 6x^2 - 7\": \n");
		int x, y;
		cout << "x = ";
		cin >> x;
		y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
		cout << "y = " << y << endl;
	}
	{
		printf("\nTask 5.\nEnter x for \"4(x-3)^6 - 7(x-3)^3 + 2\": \n");
		int x, y;
		cout << "x = ";
		cin >> x;
		y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
		cout << "y = " << y << endl;
	}
	{
		printf("\nTask 6.\nEnter number to count number^8: \n");
		int a, b;
		cout << "a = ";
		cin >> a;
		b = a * a;
		b = b * b;
		b = b * b;
		cout << "a = " << b;
	}
	{
		printf("\nTask 7.\nEnter number to count number^15: \n");
		int a, b, d;
		cout << "a = ";
		cin >> a;
		b = a * a * a; // b = 3
		d = b; // d = 3
		a = b * b; // c = 6
		b = a; // b = 6
		a = a * b; // c = 12
		a = a * d; // c = 15
		cout << "a = " << a << endl;
	}
}