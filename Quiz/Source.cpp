#include <iostream>
#include <locale>
#include <cstdlib>
using namespace std;
string Далі;
int Відповідь;
int score;


int main() {
	setlocale(LC_CTYPE, "ukr");
	score = 0;
	cout << "score = 0" << endl;

	cout << "Питання номер 1: Кому належить цитата: «Облетiвши Землю в кораблi-супутнику, я побачив, яка прекрасна наша планета. Люди, давайте зберiгати i примножувати цю красу, а не руйнувати її»?" << endl;
	cout << "варiанти вiдповiдей:" << endl;
	cout << "1) Леонiду Каденюку" << endl;
	cout << "2) Юрiю Гагарiну" << endl;
	cout << "3) Нiпу Армстронгу" << endl;
	cout << "4) Олексiю Леонову" << endl;
	cout << "Вiдповiдь - "; cin >> Відповідь;
	if (Відповідь == 2) {
		cout << "Правильно!" << endl;
		score++;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	else {
		cout << "Не правильно!" << endl;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	
			
	cout << "Питання номер 2: Яка країна вперше заснувала штучний супутник?" << endl;
	cout << "варiанти вiдповiдей:" << endl;
	cout << "1) CША" << endl;
	cout << "2) Китай" << endl;
	cout << "3) СРСР" << endl;
	cout << "4) Японiя" << endl;
	cout << "Вiдповiдь - "; cin >> Відповідь;
	if (Відповідь == 3) {
		cout << "Правильно!" << endl;
		score++;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	else {
		cout << "Не правильно!" << endl;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	cout << "Питання номер 3: Яка зiрка розташована найближче до Сонячної системи" << endl;
	cout << "варiанти вiдповiдей:" << endl;
	cout << "1) Проксима Центавра" << endl;
	cout << "2) Альфа Центавра" << endl;
	cout << "3) Сiрiус А" << endl;
	cout << "4) Пандора" << endl;
	cout << "Вiдповiдь - "; cin >> Відповідь;
	if (Відповідь == 4) {
		cout << "Правильно!" << endl;
		score++;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	else {
		cout << "Не правильно!" << endl;
		cout << "____________" << endl;
		cout << "| score = " << score; cout << "|" << endl;
		cout << "------------" << endl;
	}
	if (score == 3)
		cout << "Вiтаю ти перемiг! - 3 з 3" << endl;
	else
		if (score == 2)
			cout << "Хороший результат - 2 з 3" << endl;
		else
			if (score == 1)
				cout << "Добре - 1 з 3" << endl;
			else
				if (score == 0)
					cout << "Наступного разу пощастить - 0 з 3 " << endl;
	return 0;
}