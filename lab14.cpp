#include <iostream>
#include <string>

using namespace std;

int main() {
	{
		printf("Task 1.\n");
		int a, b;
		string s = "";
		cout << "Enter numbers a, b (a < b): ";
		do {
			cin >> a >> b;
		} while (a > b);
		for (int i = a; i <= b; i++) {
			for (int i2 = 0; i2 < i; i2++) {
				s += to_string(i);
			}
		}
		cout << "s: " << s << endl;
	}
	{
		printf("\nTask 2.\n");
		int a, b, count;
		count = 0;
		string s = "";
		cout << "Enter numbers a, b (a > b): ";
		do {
			cin >> a >> b;
		} while (a < b);
		int b2 = b;
		for (a, b; a - b >= 0; b += b) {
			count += 1;
		}
		cout << "remaining length of a: " << a - b2 * count << endl;
	}
	{
		printf("\nTask 3.\n");
		int n, k;
		cout << "enter n (n > 1): ";
		do {
			cin >> n;
		} while (n <= 1);
		int Sum = 0;
		k = 0;
		while (n - Sum > 0) {
			k += 1;
			for (int i = 0; i < k; i++) {
				Sum += i;
			}
		}
		printf("Coef. K = %d\nSumm is %d", k, Sum);
	}
	{
		printf("\n\nnTask 4.\n");
		double start = 1000;
		double p;
		int k = 0;
		cout << "Start summ is 1000\nEnter %: ";
		do {
			cin >> p;
		} while (p < 0 && p > 25);
		for (start; start < 1100; start *= (1 + p / 100)) {
			k += 1;
		}
		cout << "After " << k << " months summ will be >1100" << endl;
	}
	{
		printf("\nTask 5.\nEnter A, B: ");
		int a, b;
		scanf_s("%d %d", &a, &b);
		while (max(a, b) % min(a, b) != 0)
		{
			if (a > b)
			{
				a = a % b;
			}
			else
			{
				b = b % a;
			}
		}
		printf("NOD is %d\n", min(a, b));
	}
	{
		printf("\nTask 6.\nEnter N (N > 1, N - Fibonacci): ");
		int n, k = 1;
		do
		{
			scanf_s("%d", &n);
		} while (n <= 1);
		for (int num1 = 0, num2 = 1, num3; max(max(num1,num2), num3) <= n;)
		{
			num3 = num1 + num2;
			k++;
			if (max(max(num1, num2), num3) > n)
			{
				break;
			}
			num1 = num2 + num3;
			k++;
			if (max(max(num1, num2), num3) > n)
			{
				break;
			}
			num2 = num1 + num3;
			k++;
			if (max(max(num1, num2), num3) > n)
			{
				break;
			}
		}
<<<<<<< HEAD
		printf("The index of this Fibonacci number is %d\n", k);
=======
		printf("The count of this Fibonacci number is %d\n", k);
>>>>>>> 5634047519ec732a46adaa53871984095d1be83c
	}
	return 0;
}