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
		cout << "Данное число не подходит " << endl;
	
	units = number % 10;
	tens = number / 10;
	cout << units << tens;
	return 0;
}

//123 23*10=230 230+1=231       931  31*10=310 310+9=319

// 631 31*10=310 310+6=316     316%10=6 316/10
