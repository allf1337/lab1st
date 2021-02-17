#include "stdafx.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{	

	setlocale(LC_ALL, "Russian");
	int number,tens,units, sum, composition;
	cout << "Введите двузначное число: ";
		cin >> number;
			tens = number / 10;
			units = number % 10;
			sum = (number / 10) + (number % 10);
			composition = (number / 10) * (number % 10);
	cout << "Кол-во десятков: " << tens << endl;
	cout << "Кол-во едениц: " << units << endl;
	cout << "Сумма его цифр: " << sum << endl;
	cout << "Произведение его цифр: " << composition << endl;
	return 0;
}
