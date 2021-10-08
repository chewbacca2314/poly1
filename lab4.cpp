#include <iostream>
using namespace std;

int main() {
	float a, b;
	cout << "Task 1.\nEnter sides: \n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int S = a * b;
	int P = 2 * (a + b);
	cout << "S = " << S << endl << "P = " << P << endl;
	cout << "Task 2.\nEnter diameter: \n" << endl;
	int d;
	cout << "d = ";
	cin >> d;
	double L = 3.14 * d;
	cout << "L = " << L << endl;
	cout << "Task 3.\nEnter 2 numbers: \n" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	double med = (a + b) / 2;
	cout << "med = " << med << endl;
	cout << "Task 4.\nEnter 2 numbers: \n" << endl;
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
	cout << "Sum of squares = " << sum << endl << "Dif of squares = " << dif << endl << "Mult of squares = " << mult << endl << "Div of squares = " << div << endl;
	cout << "Task 5.\nEnter 2 numbers: \n" << endl;
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
	cout << "Sum of modules = " << sum << endl << "Dif of modules = " << dif << endl << "Mult of modules = " << mult << endl << "Div of modules = " << div << endl;
}
