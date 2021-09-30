#include <iostream>
#include <string>

using namespace std;

int main() {
	{
		int a, b;
		string s = "";
		cout << "Enter numbers a, b: ";
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
		int a, b, count;
		count = 0;
		string s = "";
		cout << "Enter numbers a, b: ";
		do {
			cin >> a >> b;
		} while (a < b);
		int b2 = b;
		for (a, b; a - b > 0; b += b) {
			count += 1;
		}
		cout << "remaining: " << a - b2 * count << endl;
	}
	{
		int n, k;
		cout << "enter n: ";
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
		cout << k << endl;
	}
	{
		double start = 1000;
		double p;
		int k = 0;
		cout << "enter %: ";
		do {
			cin >> p;
		} while (p < 0 && p > 25);
		for (start; start < 1100; start *= (1 + p / 100)) {
			k += 1;
		}
		cout << k << endl;
	}
	{
		printf("Task 5.\nEnter A, B: ");
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
		printf("%d\n", min(a, b));
	}
	{
		printf("Task 6.\n Enter N (N > 1, N - Fibonacci): ");
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
		printf("%d", k);
	}
	return 0;
}