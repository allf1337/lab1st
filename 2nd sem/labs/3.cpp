#include "stdafx.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int number, tens, units, hundred, X;
	cout << "Введите число: ";
	cin >> number;
	if (number <= 1 || number >= 1000)
			cout << "Данное число не подходит "<< endl;
		hundred = number / 100;
		tens = (number / 10);
		units = number % 10;
		
		//cout << hundred << tens << units << endl;
		X = (number / 10) * 10 + units;
		cout << X;
	return 0;
}

//123 23*10=230 230+1=231       931  31*10=310 310+9=319
