#include "stdafx.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int a,b;
	cout << "Введите число a: ";
	cin >> a;
	cout << "Введите число b: ";
	cin >> b;
	if (a % b == 0 ||  b % a == 0) 
		cout << "Да, одно из чисел является делителем другого" << endl;
	
	else 
		cout << "Нет, ни одно из чисел не является делителем другого" << endl;
	
	return 0;
}
