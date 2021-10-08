#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	{
		printf("Task 1.\n");
		int a;
		do {
			cout << "Enter angle in degrees (0 < a < 360): ";
			cin >> a;
		} while (not((a > 0) && (a < 360)));
		cout << "Angle in rad = " << double(a) / double((180 / M_PI)) << endl;
	}
	{
		printf("\nTask 2.\n");
		double a;
		cout << "Enter angle in rad (0 < a < 2*pi): ";
		cin >> a;
		if (double(a) >= 6.28)
		{
			printf("Why?...\n");
		}
		else
		{
			cout << "Angle in degrees = " << double(a) * 180 / M_PI << endl;
		}
	}
	{
		printf("\nTask 3.\n");
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
		printf("\nTask 4.\n");
		int v1, v2, s1, t;
		cout << "Enter speed (km/h) of first car, second car, distance (km) and time (h): \n";
		cin >> v1 >> v2 >> s1 >> t;
		cout << "Distance after t hours: " << (v1 + v2) * t + s1 << endl;
	}
	{
		printf("\nTask 5.\nEnter coef. A, B for \"A*x+B=0\": \n");
		int a, b;
		do {
			scanf_s("%d %d", &a, &b);
		} while (a == 0);
		double x = double(-b) / a;
		printf("x is %.2f\n", x);
	}
	{
		printf("\nTask 6.\nCounting system: \nA1*x+B1*y=C1\nA2*x+B2*y=C2\n");
		double a1, a2, b1, b2, c1, c2, x, y;
		printf("Enter coefficients for A1, A2, B1, B2, C1, C2: \n");
		scanf_s("%lf %lf %lf %lf %lf %lf", &a1, &a2, &b1, &b2, &c1, &c2);
		x = (b1 * c2 - b2 * c1) / (a1 * b2 + a2 * b1);
		y = (c2 - a2 * x) / b2;
		printf("x = %.2f, y = %.2f\n", x, y);
	}
}