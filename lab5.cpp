#include <iostream>
#include <cmath>
using namespace std;

double dist(int x1, int x2, int y1, int y2) {
	double distance = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	return distance;
}
int main() {
	int x1, x2, y1, y2, x3, y3;
	cout << "Task 1." << endl << "Enter coordinates: " << endl;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << "The distance is " << dist(x1, x2, y1, y2) << endl;
	cout << "\nTask 2.\nEnter coordinates of dots on one number line: " << endl;
	cout << "A: ";
	cin >> x1 >> y1;
	cout << "B: ";
	cin >> x2 >> y2;
	cout << "C: ";
	cin >> x3 >> y3;
	double AC = dist(x1, x3, y1, y3);
	double BC = dist(x2, x3, y2, y3);
	cout << "AC = " << AC << endl << "BC = " << BC << endl << "Sum of AC and BC = " << AC + BC << endl;
	cout << "\nTask 3.\nEnter coordinates of dots on one number line: " << endl;
	cout << "A: ";
	cin >> x1 >> y1;
	cout << "B: ";
	cin >> x2 >> y2;
	do {
		cout << "C is between A & B: ";
		cin >> x3 >> y3;
	} while (x3 > min(x1, x2) && (x3 < max(x1, x2)) && (y3 > min(y1, y2)) && (y3 < max(y1, y2)));
	double AC1 = dist(x1, x3, y1, y3);
	double BC1 = dist(x2, x3, y2, y3);
	cout << "AC = " << AC1 << endl << "BC = " << BC1 << endl << "Mult = " << AC1 * BC1 << endl;
	cout << "\nTask 4. Enter the coordinates of dots: \n" << endl;
	do {
		cout << "1st coord of rectangle: ";
		cin >> x1 >> y1;
		cout << "2nd coord of rectangle: ";
		cin >> x2 >> y2;
	} while ((x1 == x2) || (y1 == y2));
	double P = 2 * (abs(x1 - x2) + abs(y1 - y2));
	double S = abs(x1 - x2) * abs(y1 - y2);
	cout << "P = " << P << endl << "S = " << S << endl;
	cout << "\nTask 5.\nEnter coordinates: " << endl;
	double a = 0, b = 0, c = 0;
	bool k = false;
	while (not(k)) {
		cout << "1st coordinate of triangle: ";
		cin >> x1 >> y1;
		cout << "2nd coordinate of triangle: ";
		cin >> x2 >> y2;
		cout << "3rd coordinate of triangle: ";
		cin >> x3 >> y3;
		double b = dist(x1, x3, y1, y3);
		double a = dist(x2, x3, y2, y3);
		double c = dist(x1, x2, y1, y2);
		if ((b <= a + c) && (c <= b + a) && (a <= b + c)) {
			k = true;
		}
		if (k) {
			double P1 = a + b + c;
			double S1 = sqrt(P1 / 2 * (P1 - a) * (P1 - b) * (P1 - c));
			cout << "P = " << P1 << endl << "S = " << S1 << endl;
		}
	}
}