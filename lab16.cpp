#include <iostream>
#include <string>

using namespace std;

int main()
{
	{
		printf("Task 1.\nEnter N (N > 0): ");
		int n;
		scanf_s("%d", &n);
		int* numbers = new int[n+1];
		for (int i = 1, count = 0; count < n; i += 2, count++)
		{
			numbers[count] = i;
			printf("Massive[%d] = %d\n", count+1, numbers[count]);
		}
	}
	{
		printf("\nTask 2.\nEnter N, A, D (N > 1): ");
		int n, a, d;
		do
		{
			scanf_s("%d %d %d", &n, &a, &d);
		} while (n <= 1);
		int* numbers = new int[n+1];
		for (int count = 0; count < n; count++)
		{
			numbers[count] = a * int(pow(d, count));
			printf("Massive[%d] = %d\n", count+1, numbers[count]);
		}
	}
	{
		printf("\nTask 3.\nEnter N, A, B (N > 2): ");
		int n, a, b, Sum;
		do 
		{
			scanf_s("%d %d %d", &n, &a, &b);
		} while (n <= 2);
		int* numbers = new int[n + 1];
		numbers[0] = a;
		printf("Massive[%d] = %d\n", 1, numbers[0]);
		numbers[1] = b;
		printf("Massive[%d] = %d\n", 2, numbers[1]);
		Sum = a + b;
		for (int count = 2; count < n; count++)
		{
			numbers[count] = Sum;
			Sum *= 2;
			printf("Massive[%d] = %d\n", count+1, numbers[count]);
		}
	}
	{
		printf("Task 4.\nEnter N (N > 0): ");
		int n;
		do {
			scanf_s("%d", &n);
		} while (n <= 0);
		int count = 0;
		int* numbers = new int[n+2];
		while (count < n)
		{
			printf("Enter elements: \n");
			scanf_s("%d", &numbers[count]);
			count++;
		}
		for (int count = 0, k = 1; count < n/2; count++, k++)
		{
			printf("Massive[%d] = %d\nMassive[%d] = %d\n", count + 1, numbers[count], n - k + 1, numbers[n - k]);
		}
	}
	{
		printf("\nTask 5.\nEnter N: ");
		int n, count = 0;
		do {
			scanf_s("%d", &n);
		} while (n < 0);
		int* numbers = new int[n];
		while (count < n)
		{
			printf("Enter elements: \n");
			scanf_s("%d", &numbers[count]);
			count++;
		}
		for (int count = 0; count < n; count += 2)
		{
			printf("Massive[%d] = %d\n", count + 1, numbers [count]);
		}
		if (n % 2 == 0)
		{
			for (int count = n - 1; count > 0; count -= 2)
			{
				printf("Massive[%d] = %d\n", count + 1, numbers[count]);
			}
		}
		if (n % 2 == 1)
		{
			for (int count = n - 2; count > 0 ; count -= 2)
			{
				printf("Massive[%d] = %d\n", count + 1, numbers[count]);
			}
		}
	}
}