#include <iostream>

using namespace std;

void scanArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("Enter element %d: ", i + 1);
		scanf_s("%d", &array[i]);
	}
}

void printArray(int* array, int size, const char *name)
{
	printf("Massive %s: ", name);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

int main()
{
	{
		printf("Task 1.\nEnter N - size of massives: ");
		int n, count = 0;
		scanf_s("%d", &n);
		int* arrA = new int[n];
		int* arrB = new int[n];
		printf("Array A:\n");
		scanArray(arrA, n);
		printf("Array B:\n");
		scanArray(arrB, n);
		printf("Before\n");
		printArray(arrA, n, "A");
		printArray(arrB, n, "B");
		for (int i = 0; i < n; i++)
		{
			swap(arrA[i], arrB[i]);
		}
		printf("After\n");
		printArray(arrA, n, "A");
		printArray(arrB, n, "B");
	}
	{
		printf("\nTask 2.\nEnter N - size of massive: ");
		int n, Sum = 0, count = 0;
		scanf_s("%d", &n);
		int* arrA = new int[n];
		scanArray(arrA, n);
		printArray(arrA, n, "A");
		double* arrB = new double[n];
		for (int k = 0; k < n; k++)
		{
			Sum += arrA[k];
			count++;
			arrB[k] = double(Sum) / count;
		}
		printf("Massive %s: ", "B");
		for (int i = 0; i < n; i++)
		{
			printf("%.1f ", arrB[i]);
		}
		printf("\n");
	}
	{
		printf("\nTask 3.\nEnter N - size of massive: ");
		int n, lastN = 0;
		scanf_s("%d", &n);
		int* arr = new int[n];
		printf("Array:\n");
		scanArray(arr, n);
		printf("Before\n");
		printArray(arr, n, "A");
		for (int i = 0; i < n; i++)
		{
			if (arr[i] % 2 != 0)
			{
				lastN = arr[i];
			}
		}
		if (lastN != 0)
		{
			for (int i = 0; i < n; i++)
			{
				if (arr[i] % 2 != 0)
				{
					arr[i] += lastN;
				}
			}
		}
		printf("After\n");
		printArray(arr, n, "A");
	}
	{
		printf("\nTask 4.\nEnter N - size of massive: ");
		int n, imin, imax;
		scanf_s("%d", &n);
		int* arr = new int[n];
		scanArray(arr, n);
		printArray(arr, n, "before");
		int Min = INT_MAX;
		int Max = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			//printf("arr[%d] vs %d\n", i + 1, Max);
			if (arr[i] > Max)
			{
				imax = i;
				Max = arr[i];
			}
			//printf("arr[%d] vs %d\n", i + 1, Min);
			if (arr[i] < Min)
			{
				imin = i;
				Min = arr[i];
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (i > min(imin, imax) && i < max(imin, imax))
			{
				arr[i] = 0;
			}
		}
		//printf("\n\nMin = %d, Max = %d, imin = %d, imax = %d\n\n", Min, Max, imin, imax);
		printArray(arr, n, "after");
	}
	{
		printf("\nTask 5.\nEnter N - size of massive: ");
		int n;
		scanf_s("%d", &n);
		int* arr = new int[n];
		printf("Array (all elements excluding the first are sorted by increasing):\n");
		scanArray(arr, n);
		printArray(arr, n, "before");
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
			}
		}
		printArray(arr, n, "array");
	}
}