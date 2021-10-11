#include <iostream>
#include <cmath>

using namespace std;

void scanArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	{
		printf("Task 1.\nEnter a size and array: ");
		int size, count = 0;
		scanf_s("%d", &size);
		int* array = new int[size];
		scanArray(array, size);
		printf("Array before: ");
		printArray(array, size);
		for (int i = 1; i < size - count; i++)
		{
			if (array[i] == array[i - 1])
			{
				count++;
				int k = i;
				while (k < size - 1)
				{
					swap(array[k], array[k + 1]);
					k++;
				}
				i--;
			}
		}
		printf("\nArray after: ");
		printArray(array, size - count);
		printf("\n");
		delete[] array;
	}
	{
		printf("\nTask 2.\nEnter a size and array: ");
		int size;
		scanf_s("%d", &size);
		int* array = new int[size];
		scanArray(array, size);
		printf("Array before: ");
		printArray(array, size);
		int countdelete = 0;
		for (int i = 0; i < size - countdelete; i++)
		{
			int count = 0;
			for (int k = 0; k < size; k++)
			{
				if (array[i] == array[k]) count++;
			}
			if (count == 2)
			{
				int j = i;
				while (j < size - 1)
				{
					swap(array[j], array[j + 1]);
					j++;
				}
				countdelete++;
				i--;
			}
		}
		printf("\nArray after: ");
		printArray(array, size - countdelete);
		printf("\n");
		delete[]array;
	}
	{
		printf("\nTask 3.\nEnter a size and array: ");
		int size;
		scanf_s("%d", &size);
		int* array = new int[size + 2];
		scanArray(array, size);
		printf("Array before: ");
		printArray(array, size);
		int Min = INT_MAX;
		int Max = INT_MIN;
		int imax, imin;
		for (int i = 0; i < size; i++)
		{
			if (array[i] > Max)
			{
				Max = array[i];
				imax = i;
			}
			if (array[i] < Min)
			{
				Min = array[i];
				imin = i;
			}
		}
		size += 2;
		array[size - 2] = 0;
		array[size - 1] = 0;
		int swapcount = 0;
		for (int i = 0; i < size; i++)
		{
			if (i == imin)
			{
				int j = size - 1;
				while (j > imin)
				{
					swap(array[j], array[j - 1]);
					j--;
				}
			}
			if (i == imax)
			{
				int j = size - 1;
				while (j > imax + 1)
				{
					swap(array[j], array[j - 1]);
					j--;
				}
			}
		}
		printf("\nArray after: ");
		printArray(array, size);
		printf("\n");
		delete[]array;
	}
	{
		printf("\nTask 4.\nEnter a size and array: ");
		int size;
		scanf_s("%d", &size);
		int* array = new int[size];
		scanArray(array, size);
		printf("Array before: ");
		printArray(array, size);
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (array[i] < 0) {
				count++;
			}
		}
		size += count;
		int* array2 = new int[size];
		array2 = array;
		for (int i = size - count; i < size; i++)
		{
			array2[i] = 0;
		}
		for (int i = 0; i < size; i++)
		{
			if (array2[i] < 0)
			{
				int j = size - 1;
				while (j > i + 1)
				{
					swap(array2[j], array2[j - 1]);
					j--;
				}
			}
		}
		printf("\nArray after: ");
		printArray(array, size);
		printf("\n");
	}
	{
		printf("\nTask 5.\nEnter a size and array: ");
		int size;
		scanf_s("%d", &size);
		int* array = new int[size];
		scanArray(array, size);
		printf("Array before: ");
		printArray(array, size);
		int count = 0;
		for (int i = 0; i < size; i++)
		{
			if (array[i] > 0) {
				count++;
			}
		}
		size += count;
		int* array2 = new int[size];
		array2 = array;
		int Last = 0;
		for (int i = size - count; i < size; i++)
		{
			array2[i] = 0;
		}
		for (int i = 0; i < size; i++)
		{
			if (array2[i] > 0 && array2[i] != Last)
			{
				int j = size - 1;
				Last = array2[i];
				while (j > i)
				{
					swap(array[j], array[j - 1]);
					j--;
				}
			}
		}
		printf("\nArray after: ");
		printArray(array2, size);
		printf("\n");
		delete[]array;
	}
}