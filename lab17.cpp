#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

void printArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Massive [%d] = %d\n", i + 1, array[i]);
	}
}

int main() {
	//{
	//	printf("Task 1.\nEnter N - size, K and L - numbers (1 <= K <= L <= N): ");
	//	int n, l, k;
	//	do
	//	{
	//		scanf_s("%d %d %d", &n, &k, &l);
	//	} while (k < 1 || l < k || n < l);
	//	int Sum = 0;
	//	int count = 0;
	//	int* numbers = new int[n];
	//	while (count < n)
	//	{
	//		printf("Enter the element %d: ", count + 1);
	//		scanf_s("%d", &numbers[count]);
	//		count += 1;
	//	}
	//	printArray(numbers, n);
	//	for (int i = int(k) - 1; i < l; i++)
	//	{
	//		Sum += numbers[i];
	//	}
	//	double med = double(Sum) / (l - k);
	//	printf("Average between elements #%d and #%d is %.2f\n", k, l, med);
	//}
	/*{
		printf("\nTask 2.\nEnter N - size: ");
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
			count += 1;
		}
		printArray(numbers, n);
		int flag = 1;
		for (int i = 2; i < n; i++)
		{
			if (not(abs(numbers[i] - numbers[i - 1]) == abs(numbers[i - 1] - numbers[i-2])))
			{
				flag = 0;
			}
		}
		if (flag)
		{
			printf("Difference is %d\n", numbers[1] - numbers[0]);
		}
		else
		{
			printf("0");
		}
	}*/
	//{
	//	printf("\nTask 3.\nEnter N - size: ");
	//	int n;
	//	do {
	//		scanf_s("%d", &n);
	//	} while (n <= 0);
	//	int* numbers = new int[n];
	//	int count = 0;
	//	while (count < n)
	//	{
	//		printf("Enter the element %d: ", count + 1);
	//		scanf_s("%d", &numbers[count]);
	//		count += 1;
	//	}
	//	printArray(numbers, n);
	//	int Min = INT_MAX;
	//	for (int i = 0; i < n; i++)
	//	{
	//		if (numbers[i] < Min && i % 2 == 1)
	//		{
	//			Min = numbers[i];
	//		}
	//	}
	//	printf("Minimal number with even index is %d\n", Min);
	//}
	//{
	//	printf("\nTask 4.\nEnter N - size of massive (N > 0): ");
	//	int n;
	//	scanf_s("%d", &n);
	//	int* numbers = new int[n];
	//	int count = 0;
	//	while (count < n)
	//	{
	//		printf("Enter the element %d: ", count + 1);
	//		scanf_s("%d", &numbers[count]);
	//		count += 1;
	//	}
	//	printArray(numbers, n);
	//	int i2 = 0;
	//	int Max = INT_MIN;
	//	for (int i = 1; i < n; i++)
	//	{
	//		if (i == n)
	//		{
	//			if (numbers[i] > numbers[i - 1])
	//			{
	//				Max = numbers[i];
	//				i2 = i;
	//			}
	//		}
	//		else
	//		{
	//			if (numbers[i - 1] < numbers[i] && numbers[i] > numbers[i + 1])
	//			{
	//				Max = numbers[i];
	//				i2 = i;
	//			}
	//		}
	//	}
	//	printf("The last local maximum is #%d", i2 + 1);
	//}
	{
		printf("\n\nTask 5.\nEnter N - size of massive: ");
		int n;
		scanf_s("%d", &n);
		int* numbers = new int[n];
		int count = 0;
		while (count < n)
		{
			printf("Enter the element %d (two of them must be equal): ", count + 1);
			scanf_s("%d", &numbers[count]);
			count += 1;
		}
		printArray(numbers, n);
		int flag = 0;
		for (int i = 1; i < n; i++)
		{
			for (int k = 0; k < n; k++)
			{
				if (numbers[i] == numbers[k] && i != k)
				{
					printf("The equal elements are #%d and #%d\n", min(k, i) + 1, max(k, i) + 1);
					flag = 1;
				}
			}
		}
		if (flag == 0)
		{
			printf("No equal elements\n");
		}
	}
}