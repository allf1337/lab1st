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
		if (number > 99 | number < 9)
			cout << "Данное число не двузначно "<< endl;
		tens = number / 10;
		units = number % 10;
		cout << units << tens << endl;
	
	return 0;
}
