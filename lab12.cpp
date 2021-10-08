#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	{
		int d, m;
		string s;
		s = "";
		cout << "Task 1.\nEnter a number of day, month: ";
		do {
			cin >> d >> m;
		} while (not((d >= 1 && d <= 31) && (m >= 1 && m <= 12)));
		switch (d)
		{
		case 1:
			s += "первое ";
			break;
		case 2:
			s += "второе ";
			break;
		case 3:
			s += "третье ";
			break;
		case 4:
			s += "четвертое ";
			break;
		case 5:
			s += "пятое ";
			break;
		case 6:
			s += "шестое ";
			break;
		case 7:
			s += "седьмое ";
			break;
		case 8:
			s += "восьмое ";
			break;
		case 9:
			s += "девятое ";
			break;
		case 10:
			s += "десятое ";
			break;
		case 11:
			s += "одиннадцатое ";
			break;
		case 12:
			s += "двенадцатое ";
			break;
		case 13:
			s += "тринадцатое ";
			break;
		case 14:
			s += "четырнадцатое ";
			break;
		case 15:
			s += "пятнадцатое ";
			break;
		case 16:
			s += "шестнадцатое ";
			break;
		case 17:
			s += "семнадцатое ";
			break;
		case 18:
			s += "восемнадцатое ";
			break;
		case 19:
			s += "девятнадцатое ";
			break;
		case 20:
			s += "двадцатое ";
			break;
		case 21:
			s += "двадцать первое ";
			break;
		case 22:
			s += "двадцать второе ";
			break;
		case 23:
			s += "двадцать третье ";
			break;
		case 24:
			s += "двадцать четвертое ";
			break;
		case 25:
			s += "двадцать пятое ";
			break;
		case 26:
			s += "двадцать шестое ";
			break;
		case 27:
			s += "двадцать седьмое ";
			break;
		case 28:
			s += "двадцать восьмое ";
			break;
		case 29:
			s += "двадцать девятое ";
			break;
		case 30:
			s += "тридцатое ";
			break;
		case 31:
			s += "тридцать первое ";
			break;
		default:
			break;
		}
		switch (m)
		{
		case 1:
			s += "января ";
			break;
		case 2:
			s += "февраля ";
			break;
		case 3:
			s += "марта ";
			break;
		case 4:
			s += "апреля ";
			break;
		case 5:
			s += "мая ";
			break;
		case 6:
			s += "июня ";
			break;
		case 7:
			s += "июля ";
			break;
		case 8:
			s += "августа ";
			break;
		case 9:
			s += "сентября ";
			break;
		case 10:
			s += "октября ";
			break;
		case 11:
			s += "ноября ";
			break;
		case 12:
			s += "декабря ";
			break;
		default:
			break;
		}
		cout << s << endl;
	}
	{
		int a;
		string s2 = "", s1 = "";
		cout << "Task 3.\nEnter a number (10 <= n <= 40): ";
		do {
			cin >> a;
		} while (not(a >= 10 && a <= 40));
		if (to_string(a)[0] - '0' == 1) {
			switch (to_string(a)[1] - '0') {
			case 0:
				s1 += "десять";
				break;
			case 1:
				s1 += "одиннадцать";
				break;
			case 2:
				s1 += "двенадцать";
				break;
			case 3:
				s1 += "тринадцать";
				break;
			case 4:
				s1 += "четырнадцать";
				break;
			case 5:
				s1 += "пятнадцать";
				break;
			case 6:
				s1 += "шестнадцать";
				break;
			case 7:
				s1 += "семнадцать";
				break;
			case 8:
				s1 += "восемнадцать";
				break;
			case 9:
				s1 += "девятнадцать";
				break;
			default:
				break;
			}
		}
		else {
			switch (to_string(a)[0] - '0') {
			case 2:
				s1 += "двадцать ";
				break;
			case 3:
				s1 += "тридцать ";
				break;
			default:
				break;
			}
			switch (to_string(a)[1] - '0') {
			case 1:
				s1 += "одно";
				break;
			case 2:
				s1 += "два";
				break;
			case 3:
				s1 += "три";
				break;
			case 4:
				s1 += "четыре";
				break;
			case 5:
				s1 += "пять";
				break;
			case 6:
				s1 += "шесть";
				break;
			case 7:
				s1 += "семь";
				break;
			case 8:
				s1 += "восемь";
				break;
			case 9:
				s1 += "девять";
				break;
			default:
				break;
			}
		}
		if (s1[-1] == 'o') {
			s2 += " учебное задание ";
		}
		else {
			if (s1[-1] == 'а' || s1[-1] == 'е') {
				s2 += " учебных задания ";
			}
			else {
				s2 += " учебных заданий ";
			}
		}
		cout << s1 << " " << s2 << endl;
	}
	{
		int num;
		cout << "Task 4.\nEnter a number (100 <= n < 1000): ";
		do {
			cin >> num;
		} while (num < 100 && num >= 1000);
		string num2 = to_string(num);
		switch (num2[0] - '0'){
		case 1:
			cout << "Сто ";
			break;
		case 2:
			cout << "Двести ";
			break;
		case 3:
			cout << "Триста ";
			break;
		case 4:
			cout << "Четыреста ";
			break;
		case 5:
			cout << "Пятьсот ";
			break;
		case 6:
			cout << "Шестьсот ";
			break;
		case 7:
			cout << "Семьсот ";
			break;
		case 8:
			cout << "Восемьсот ";
			break;
		case 9:
			cout << "Девятьсот ";
			break;
		default:
			break;
		}
		if (num2[1] - '0' == 1) {
			switch (num2[2] - '0')
			{
			case 0:
				cout << "десять ";
				break;
			case 1:
				cout << "одинадцать ";
				break;
			case 2:
				cout << "двенадцать ";
				break;
			case 3:
				cout << "тринадцать ";
				break;
			case 4:
				cout << "четырнадцать ";
				break;
			case 5:
				cout << "пятнадцать ";
				break;
			case 6:
				cout << "шестнадцать ";
				break;
			case 7:
				cout << "семнадцать ";
				break;
			case 8:
				cout << "восемнадцать ";
				break;
			case 9:
				cout << "девятнадцать ";
				break;
			default:
				break;
			}
		}
		else {
			switch (num2[1] - '0')
			{
			case 0:
				break;
			case 2:
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			case 4:
				cout << "сорок ";
				break;
			case 5:
				break;
				cout << "пятьдесят ";
				break;
			case 6:
				cout << "шестьдесят ";
				break;
			case 7:
				cout << "семьдесят ";
				break;
			case 8:
				cout << "восемьдесят ";
				break;
			case 9:
				cout << "девяносто ";
				break;
			default:
				break;
			}
			switch (num2[2] - '0')
			{
			case 0:
				break;
			case 1:
				cout << "один";
				break;
			case 2:
				cout << "два";
				break;
			case 3:
				cout << "три";
				break;
			case 4:
				cout << "четыре";
				break;
			case 5:
				cout << "пять";
				break;
			case 6:
				cout << "шесть";
				break;
			case 7:
				cout << "семь";
				break;
			case 8:
				cout << "восемь";
				break;
			case 9:
				cout << "девять ";
				break;
			default:
				cout << endl;
				break;
			}
		}
		cout << endl;
	}
	{
		int y;
		string col[5]{ "зеленый", "красный", "желтый", "белый", "черный" };
		string an[12]{ "крыса", "корова", "тигр", "заяц", "дракон", "змея", "лошадь", "овца", "обезьяна", "курица", "собака", "свинья" };
		cout << "Task 5.\nEnter a year: ";
		do {
			cin >> y;
		} while (y <= 0);
		cout << "год " << col[int(y - int(y / 60) * 60) / 12] << " " << an[(y - int(y / 60) * 60) % 12] << endl;
	}
}