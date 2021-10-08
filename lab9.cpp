#include <iostream>
#include <string>
using namespace std;

int main() {
	{
		int t;
		cout << "Task 1.\nSeconds in day ( <86400 ): ";
		cin >> t;
		cout << "Seconds after last minute: " << t % 60 << endl;
	}
	{
		int n;
		cout << "\nTask 2.\nDay of the year ( <= 365 ): ";
		do {
			cin >> n;
		} while (not((n >= 1) && (n <= 365)));
		cout << "Day of the week: " << 6 - n % 6 << endl;
	}
	{
		int n, k;
		cout << "\nTask 3\nDay of the year: ";
		do {
			cin >> n;
		} while (not((n >= 1) && (n <= 365)));
		cout << "1st jan is (# of the day of the week): ";
		cin >> k;
		cout << "Day of the week: " << 6 - n % 7 + k << endl;
	}
	{
		int a, b, c;
		cout << "\nTask 4.\nEnter a, b(sides of rectangle), c(side of square in AB rectangle) ( > 0 ) : ";
		cin >> a >> b >> c;
		cout << "Squares count: " << a * b / (c*c) << endl << "Remaining square: " << a * b % (c*c) << endl;
	}
	{
		int y;
		string y2;
		cout << "\nTask 5.\nNumber of year: ";
		do {
			cin >> y;
		} while (y < 0);
		if (to_string(y).length() == 4) {
			y2 = to_string(y).substr(0, 2);
		}
		if (to_string(y).length() == 3) {
			y2 = to_string(y)[1];
		}
		if (to_string(y).length() < 3) {
			y2 = "0";
		}
		cout << "Century for this year: " << stoi(y2) + 1 << endl;
	}
}