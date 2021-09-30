#include <iostream>
#include <cmath>

using namespace std;

int main() {
	{
		printf("Task 1.\nEnter N - size, K and L - numbers (1 <= K <= L <= N): ");
		int n;
		double l, k;
		do
		{
			scanf_s("%d %lf %lf", &n, &k, &l);
		} while (k < 1 || l < k || n < l);
		int Sum = 0;
		int count = 0;
		int* numbers = new int[n];
		while (count < n)
		{
			printf("\nEnter the element %d: ", count + 1);
			scanf_s("%d", &numbers[count]);
			count += 1;
		}
		for (int i = int(k) - 1; i < l; i++)
		{
			Sum += numbers[i];
		}
		double med = double(Sum) / (l - k);
		printf("\nAverage is %.2f\n", med);
	}
	{
		printf("Task 2.\nEnter N - size: \n");
		int n;
		do
		{
			scanf_s("%d", &n);
		} while (n <= 0);
		int count = 0;
		int* numbers = new int[n];
		while (count < n)
		{
			printf("Enter the element %d: ", count + 1);
			scanf_s("%d", &numbers[count]);
			printf("\n");
			count += 1;
		}
		int flag = 1;
		for (int i = 2; i < n; i++)
		{
			printf("Massive [%d]: \n", numbers[i - 1]);
			if (not(abs(numbers[i] - numbers[i - 1]) == abs(numbers[i - 1] - numbers[i-2])))
			{
				cout << i << endl;
				flag = 0;
			}
		}
		cout << flag;
		if (flag)
		{
			printf("Difference is %n\n", numbers[1] - numbers[0]);
		}
		else
		{
			printf(0);
		}
	}
	{
		printf("Task 3.\nEnter A - name, N - size: ");
		int n;
		string a;
		do {
			cin >> a;
			scanf_s("%d", &n);
		} while (n <= 0);
		int* numbers = new int[n];
		int count = 0;
		while (count < n)
		{
			printf("Enter the element %d: ", count + 1);
			scanf_s("%d", &numbers[count]);
			printf("\n");
			count += 1;
		}
		int Min = 9999;
		for (int i = 0; i < n; i++)
		{
			printf("Massive[%d] = \n", i + 1);
			if (numbers[i] < Min && i % 2 == 1)
			{
				Min = numbers[i];
			}
		}
		printf("Minimal number is %d", Min);
	}
}