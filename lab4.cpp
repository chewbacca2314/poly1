#include <iostream>
using namespace std;

int main() {
	float a;
	float b;
	cout << "Task 1." << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int S = a * b;
	int P = 2 * (a + b);
	cout << "S = " << S << endl << "P = " << P << endl;
	cout << "Task 2" << endl;
	int d;
	cout << "d = ";
	cin >> d;
	double L = 3.14 * d;
	cout << "L = " << L << endl;
	cout << "Task 3." << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	double med = (a + b) / 2;
	cout << "med = " << med << endl;
	cout << "Task 4." << endl;
	float x = 0;
	float y = 0;
	while (x == 0) {
		cout << "x = ";
		cin >> x;
	}
	while (y == 0) {
		cout << "y = ";
		cin >> y;
	}
	float sum = y * y + x * x;
	float dif = x * x - y * y;
	float mult = y * y * x * x;
	float div = (x * x) / (y * y);
	cout << "sum = " << sum << endl << "dif = " << dif << endl << "mult = " << mult << endl << "div = " << div << endl;
	cout << "Task 5." << endl;
	x = 0;
	y = 0;
	while (x == 0) {
		cout << "x = ";
		cin >> x;
	}
	while (y == 0) {
		cout << "y = ";
		cin >> y;
	}
	sum = abs(x) + abs(y);
	dif = abs(x) - abs(y);
	mult = abs(x) * abs(y);
	div = abs(x) / abs(y);
	cout << "sum = " << sum << endl << "dif = " << dif << endl << "mult = " << mult << endl << "div = " << div << endl;
}