#include <iostream>
#include <cmath>

using namespace std;

int main() {
	{
		cout << "Task 1." << endl;
		double kg;
		cout << "Enter price of 1kg: ";
		do {
			cin >> kg;
		} while (kg <= 0);
		for (int i = 1; i <= 10; i++) {
			cout << "Price of " << 0.1 * i << "kg: " << double(kg) * i / 10 << endl;
		}
		cout << "\n\n";
	}
	{
		cout << "Task 2." << endl;
		int n;
		double mult = 1;
		cout << "Enter N (N>0): ";
		do {
			cin >> n;
		} while (n <= 0);
		cout << "Mult of " << n << " numbers: ";
		for (int i = 0; i <= n; i++) {
			mult *= 1 + double(i) / 10;
		}
		printf("%.5f\n", mult);
	}
	{
		printf("Task 3.\n");
		cout << "Enter N(N>0): ";
		int n, sum = 0;
		do 
		{
			scanf_s("%i", &n);
		} while (n <= 0);
		for (int i = 1; i <= n; i++) 
		{
			sum += 2 * i - 1;
		}
		printf("%d %s", sum, "\n");
	}
	{
		int n;
		double a, sum = 0;
		printf("Task 4.\nEnter A, N(N>0): ");
		do
		{
			scanf_s("%lf %i", &a, &n);
		} while (n < 0);
		for (int i = 0; i <= n; i++)
		{
			sum += pow(a, i);
		}
		printf("%.2f\n", sum);
	}
	{
		printf("Task 5.\nEnter A, N(N>0): ");
		int n;
		double a, sum = 0;
		do 
		{
			scanf_s("%lf %d", &a, &n);
		} while (n < 0);
		for (int i = 0; i <= n; i++)
		{
			sum += pow((-1), i) * pow(a, i);
		}
		printf("%.2f\n", sum);
	}
}