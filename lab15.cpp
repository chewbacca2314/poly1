#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int	PowerA3(int a)
{
	int b = a;
	for (int i = 1; i < 3; i++)
	{
		b *= a;
	}
	return b;
}

int Sign(double x)
{
	if (x < 0)
	{
		return -1;
	}
	if (x > 0)
	{
		return 1;
	}
	if (x == 0)
	{
		return 0;
	}
}

double RingS(double r1, double r2)
{
	return M_PI * (pow(r1, 2) - pow(r2, 2));
}

double Quarter(double x, double y)
{
	if (x > 0 && y > 0)
	{
		return 1;
	}
	if (x > 0 && y < 0)
	{
		return 4;
	}
	if (x < 0 && y > 0)
	{
		return 2;
	}
	if(x < 0 && y < 0)
	{
		return 3;
	}
}

double Fact2(int n)
{
	if (n % 2 != 0)
	{
		double mult = 1;
		for (int i = 1; i <= n; i += 2)
		{
			mult *= i;
		}
		return mult;
	}
	else
	{
		double mult = 1;
		for (int i = 2; i <= n; i += 2)
		{
			mult *= i;
		}
		return mult;
	}
}

int main()
{
	{
		printf("Task 1.\nEnter five numbers: ");
		setlocale(LC_ALL, "Rus");
		int num1, num2, num3, num4, num5;
		scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
		num1 = PowerA3(num1);
		num2 = PowerA3(num2);
		num3 = PowerA3(num3);
		num4 = PowerA3(num4);
		num5 = PowerA3(num5);
		printf("Третья степень чисел: %d %d %d %d %d\n", num1, num2, num3, num4, num5);
	}
	{
		double num1, num2;
		int Sum;
		printf("\nTask 2.\nEnter 2 float numbers: ");
		scanf_s("%lf %lf", &num1, &num2);
		Sum = Sign(num1) + Sign(num2);
		printf("Sign(%.2f) + Sign(%.2f) = %d \n", num1, num2, Sum);
	}
	{
		printf("\nTask 3.\nEnter R11, R12, R21, R22, R31, R32(R1 > R2): \n");
		double r11, r21, r12, r22, r31, r32;
		do {
			scanf_s("%lf %lf %lf %lf %lf %lf", &r11, &r12, &r21, &r22, &r31, &r32);
		} while (r11 <= r12 || r21 <= r22 || r31 <= r32);
		double S1 = RingS(r11, r12);
		double S2 = RingS(r21, r22);
		double S3 = RingS(r31, r32);
		printf("S1 between ring R11 and ring R12 = %.2f\nS2 between ring R21 and ring R22 = %.2f\nS3 between ring R31 and ring R32 = %.2f\n", S1, S2, S3);
	}
	{
		printf("\nTask 4.\nEnter coordinates (x1;y1), (x2;y2), (x3;y3) (x != 0, y != 0): \n");
		double x1, x2, x3, y1, y2, y3;
		do {
			scanf_s("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
		} while (x1 == 0 || y1 == 0 || x2 == 0 || y2 == 0 || x3 == 0 || y3 == 0);
		printf("Quarter 1: %.0f\nQuarter 2: %.0f\nQuarter 3: %.0f", Quarter(x1, y1), Quarter(x2, y2), Quarter(x3, y3));
	}
	{
		printf("\n\nTask 5.\nEnter N (N > 0): \n");
		int n;
		do {
			scanf_s("%d", &n);
		} while (n <= 0);
		printf("Double factorial = %.1f\n", Fact2(n));
	}
}