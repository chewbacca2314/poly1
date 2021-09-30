#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	{
		int a, b;
		cout << "Task 1.\n Enter 2 numbers a, b: ";
		cin >> a >> b;
		if (a == b) {
			a = 0;
			b = 0;
		}
		else {
			if (a > b) {
				b = a;
			}
			else
			{
				a = b;
			}
		}
		printf("Before a, b: %d, %d", a, b);
		cout << "After a, b: " << a << ", " << b << endl;
	}
	{
		printf("Task 2.\n Enter 3 numbers: ");
		int a, b, c;
		cin >> a >> b >> c;
		cout << "Sum of 2 maximums: " << a + b + c - min(a, b, c) << endl;
	}
	{
		printf("Task 3.\nEnter 3 dots.\n");
		int x1,x2,x3,y1,y2,y3, ab, ac;
		cout << "a: ";
		cin >> x1 >> y1;
		cout << "b: ";
		cin >> x2 >> y2;
		cout << "c: ";
		cin >> x3 >> y3;
		ab = abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2);
		ac = abs(x3 - x2) * abs(x3 - x2) + abs(y3 - y2) * abs(y3 - y2);
		if (ac < ab) {
			cout << "C is closer to A: " << ac << endl;
		}
		else {
			cout << "B is closer to A: " << ab << endl;
		}
	}
	{
		int x, y;
		cout << "Task 4.\nEnter a dot: ";
		do {
			cin >> x >> y;
		} while (not(x == 0) || (y == 0));
		if (x > 0 && y > 0) {
			cout << "First quarter: ";
		}
		if (x > 0 && y < 0) {
			cout << "Fourth quarter: ";
		}
		if (x < 0 && y > 0) {
			cout << "Second quarter: ";
		}
		if (x < 0 && y < 0) {
			cout << "Third quarter: ";
		}
	}
	{
		int a;
		string s;
		cout << "Task 5.\nEnter a number: ";
		cin >> a;
		if (a == 0) {
			s += "нулевое ";
		}
		if (a > 0) {
			s += "положительное ";
		}
		else {
			s += "отрицательное ";
		}
		if (a % 2 == 0) {
			s += "чётное ";
		}
		else {
			s += "нечётное ";
		}
		s += "число";
		cout << a << " - " << s;
	}
	{
		int a;
		string s;
		cout << "Task 6.\nEnter a number: ";
		do {
			cin >> a;
		} while (not(a >= 1 && a <= 999));
		if (a % 2 == 0) {
			s += "чётное ";
		}
		else {
			s += "нечётное ";
		}
		if (to_string(a).length() == 1) {
			s += "однозначное ";
		}
		if (to_string(a).length() == 2) {
			s += "двузначное ";
		}
		if (to_string(a).length() == 3) {
			s += "трёхзначное ";
		}
		s += "число";
		cout << a << " - " << s;
	}
}