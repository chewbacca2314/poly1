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
			s += "������ ";
			break;
		case 2:
			s += "������ ";
			break;
		case 3:
			s += "������ ";
			break;
		case 4:
			s += "��������� ";
			break;
		case 5:
			s += "����� ";
			break;
		case 6:
			s += "������ ";
			break;
		case 7:
			s += "������� ";
			break;
		case 8:
			s += "������� ";
			break;
		case 9:
			s += "������� ";
			break;
		case 10:
			s += "������� ";
			break;
		case 11:
			s += "������������ ";
			break;
		case 12:
			s += "����������� ";
			break;
		case 13:
			s += "����������� ";
			break;
		case 14:
			s += "������������� ";
			break;
		case 15:
			s += "����������� ";
			break;
		case 16:
			s += "������������ ";
			break;
		case 17:
			s += "����������� ";
			break;
		case 18:
			s += "������������� ";
			break;
		case 19:
			s += "������������� ";
			break;
		case 20:
			s += "��������� ";
			break;
		case 21:
			s += "�������� ������ ";
			break;
		case 22:
			s += "�������� ������ ";
			break;
		case 23:
			s += "�������� ������ ";
			break;
		case 24:
			s += "�������� ��������� ";
			break;
		case 25:
			s += "�������� ����� ";
			break;
		case 26:
			s += "�������� ������ ";
			break;
		case 27:
			s += "�������� ������� ";
			break;
		case 28:
			s += "�������� ������� ";
			break;
		case 29:
			s += "�������� ������� ";
			break;
		case 30:
			s += "��������� ";
			break;
		case 31:
			s += "�������� ������ ";
			break;
		default:
			break;
		}
		switch (m)
		{
		case 1:
			s += "������ ";
			break;
		case 2:
			s += "������� ";
			break;
		case 3:
			s += "����� ";
			break;
		case 4:
			s += "������ ";
			break;
		case 5:
			s += "��� ";
			break;
		case 6:
			s += "���� ";
			break;
		case 7:
			s += "���� ";
			break;
		case 8:
			s += "������� ";
			break;
		case 9:
			s += "�������� ";
			break;
		case 10:
			s += "������� ";
			break;
		case 11:
			s += "������ ";
			break;
		case 12:
			s += "������� ";
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
				s1 += "������";
				break;
			case 1:
				s1 += "�����������";
				break;
			case 2:
				s1 += "����������";
				break;
			case 3:
				s1 += "����������";
				break;
			case 4:
				s1 += "������������";
				break;
			case 5:
				s1 += "����������";
				break;
			case 6:
				s1 += "�����������";
				break;
			case 7:
				s1 += "����������";
				break;
			case 8:
				s1 += "������������";
				break;
			case 9:
				s1 += "������������";
				break;
			default:
				break;
			}
		}
		else {
			switch (to_string(a)[0] - '0') {
			case 2:
				s1 += "�������� ";
				break;
			case 3:
				s1 += "�������� ";
				break;
			default:
				break;
			}
			switch (to_string(a)[1] - '0') {
			case 1:
				s1 += "����";
				break;
			case 2:
				s1 += "���";
				break;
			case 3:
				s1 += "���";
				break;
			case 4:
				s1 += "������";
				break;
			case 5:
				s1 += "����";
				break;
			case 6:
				s1 += "�����";
				break;
			case 7:
				s1 += "����";
				break;
			case 8:
				s1 += "������";
				break;
			case 9:
				s1 += "������";
				break;
			default:
				break;
			}
		}
		if (s1[-1] == 'o') {
			s2 += " ������� ������� ";
		}
		else {
			if (s1[-1] == '�' || s1[-1] == '�') {
				s2 += " ������� ������� ";
			}
			else {
				s2 += " ������� ������� ";
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
			cout << "��� ";
			break;
		case 2:
			cout << "������ ";
			break;
		case 3:
			cout << "������ ";
			break;
		case 4:
			cout << "��������� ";
			break;
		case 5:
			cout << "������� ";
			break;
		case 6:
			cout << "�������� ";
			break;
		case 7:
			cout << "������� ";
			break;
		case 8:
			cout << "��������� ";
			break;
		case 9:
			cout << "��������� ";
			break;
		default:
			break;
		}
		if (num2[1] - '0' == 1) {
			switch (num2[2] - '0')
			{
			case 0:
				cout << "������ ";
				break;
			case 1:
				cout << "���������� ";
				break;
			case 2:
				cout << "���������� ";
				break;
			case 3:
				cout << "���������� ";
				break;
			case 4:
				cout << "������������ ";
				break;
			case 5:
				cout << "���������� ";
				break;
			case 6:
				cout << "����������� ";
				break;
			case 7:
				cout << "���������� ";
				break;
			case 8:
				cout << "������������ ";
				break;
			case 9:
				cout << "������������ ";
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
				cout << "�������� ";
				break;
			case 3:
				cout << "�������� ";
				break;
			case 4:
				cout << "����� ";
				break;
			case 5:
				break;
				cout << "��������� ";
				break;
			case 6:
				cout << "���������� ";
				break;
			case 7:
				cout << "��������� ";
				break;
			case 8:
				cout << "����������� ";
				break;
			case 9:
				cout << "��������� ";
				break;
			default:
				break;
			}
			switch (num2[2] - '0')
			{
			case 0:
				break;
			case 1:
				cout << "����";
				break;
			case 2:
				cout << "���";
				break;
			case 3:
				cout << "���";
				break;
			case 4:
				cout << "������";
				break;
			case 5:
				cout << "����";
				break;
			case 6:
				cout << "�����";
				break;
			case 7:
				cout << "����";
				break;
			case 8:
				cout << "������";
				break;
			case 9:
				cout << "������ ";
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
		string col[5]{ "�������", "�������", "������", "�����", "������" };
		string an[12]{ "�����", "������", "����", "����", "������", "����", "������", "����", "��������", "������", "������", "������" };
		cout << "Task 5.\nEnter a year: ";
		do {
			cin >> y;
		} while (y <= 0);
		cout << "��� " << col[int(y - int(y / 60) * 60) / 12] << " " << an[(y - int(y / 60) * 60) % 12] << endl;
	}
}