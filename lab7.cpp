#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	{
		printf("Task 1.\n");
		int a;
		do {
			cout << "Enter angle in degrees: ";
			cin >> a;
		} while (not((a > 0) && (a < 360)));
		cout << "Angle = " << double(a) / double((180 / M_PI)) << endl;
	}
	{
		printf("Task 2.\n");
		int a;
		do {
			cout << "Enter angle in rad: ";
			cin >> a;
		} while (not((a > 0) && (a < M_PI*2)));
		cout << "Angle = " << double(a) * 180 / M_PI << endl;
	}
	{
		printf("Task 3.\n");
		int x, y, a1, a2;
		cout << "How many kg of sweets #1?: \n";
		cin >> x;
		cout << "What's total price of sweets #1?: \n";
		cin >> a1;
		cout << "How many kg of sweets #2?: \n";
		cin >> y;
		a2 = a1 * y / x;
		cout << "Total price of sweets #2 is " << a2 << endl;
	}
	{
		printf("Task 4.\n");
		int v1, v2, s1, t;
		cout << "Enter speed of first car, second car, distance and time: \n";
		cin >> v1 >> v2 >> s1 >> t;
		cout << "Distance after t hours: " << (v1 + v2) * t + s1 << endl;
	}
	{
		printf("Task 5.\nEnter coef. a, b for \"A*x+B=0\": \n");
		int a, b;
		do {
			scanf_s("%d %d", &a, &b);
		} while (a == 0);
		int x = -b / a;
		printf("x is %d", x);
	}
	{
		printf("Task 6.\nCounting system: \nA1*x+B1*y=C1\nA2*x+B2*y=C2\n");
		int a1, a2, b1, b2, c1, c2, x, y;
		a1 = 2;
		a2 = 3;
		b1 = 4;
		b2 = 5;
		c1 = 6;
		c2 = 8;
		x = (b1 * c2 - b2 * c1) / (a1 * b2 + a2 * b1);
		y = (c2 - a2 * x) / b2;
		cout << "x = " << x << "y = " << y;
	}
}