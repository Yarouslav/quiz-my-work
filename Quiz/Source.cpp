#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
string ���;
int ³������;
int score;


int main() {
	setlocale(LC_CTYPE, "ukr");
	score = 0;
	cout << "score = 0" << endl;

	cout << "������� ����� 1: ���� �������� ������: ������i��� ����� � ������i-���������, � �������, ��� ��������� ���� �������. ����, ������� ����i���� i ������������ �� �����, � �� ��������� ���?" << endl;
	cout << "���i���� �i����i���:" << endl;
	cout << "1) ����i�� ��������" << endl;
	cout << "2) ��i� �����i��" << endl;
	cout << "3) �i�� ����������" << endl;
	cout << "4) �����i� �������" << endl;
	cout << "�i����i�� - "; cin >> ³������;
	if (³������ == 2) {
		cout << "���������!" << endl;
		score++;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	else {
		cout << "�� ���������!" << endl;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	
			
	cout << "������� ����� 2: ��� ����� ������ ��������� ������� ��������?" << endl;
	cout << "���i���� �i����i���:" << endl;
	cout << "1) C��" << endl;
	cout << "2) �����" << endl;
	cout << "3) ����" << endl;
	cout << "4) ����i�" << endl;
	cout << "�i����i�� - "; cin >> ³������;
	if (³������ == 3) {
		cout << "���������!" << endl;
		score++;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	else {
		cout << "�� ���������!" << endl;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	cout << "������� ����� 3: ��� �i��� ����������� ��������� �� ������� �������" << endl;
	cout << "���i���� �i����i���:" << endl;
	cout << "1) �������� ��������" << endl;
	cout << "2) ����� ��������" << endl;
	cout << "3) �i�i�� �" << endl;
	cout << "4) �������" << endl;
	cout << "�i����i�� - "; cin >> ³������;
	if (³������ == 4) {
		cout << "���������!" << endl;
		score++;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	else {
		cout << "�� ���������!" << endl;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	if (score == 3)
		cout << "�i��� �� �����i�! - 3 � 3" << endl;
	else
		if (score == 2)
			cout << "������� ��������� - 2 � 3" << endl;
		else
			if (score == 1)
				cout << "����� - 1 � 3" << endl;
			else
				if (score == 0)
					cout << "���������� ���� ��������� - 0 � 3 " << endl;
	return 0;
}