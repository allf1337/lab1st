Next day:

#include "stdafx.h"
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int m,n,day;
	cout << "Введите номер месяца m: ";
	cin >> m;
	if (m > 12 ) {
		cout << "Некорректное число";
	}
	cout << "Введите число n: ";
	cin >> n;
	if (n > 31) {
		cout << "Некорректное число";
	}
	


	if (n + 1 > 31)
	{
		m = m + 1;
		n = 1;
	}

	else if (n - 1 < 0)
	{
		m = m - 1;
    
    
    
		n = 31;
	}
	else {
		n = n + 1;
	}
	
	if (m == 13 && n == 1)
	{
		cout << "Неопределяемая дата" <<endl;
		return 0;

	}

	
		cout << "Следующий день: ";
		cout << "Месяц: " << m << " Число: " << n << endl;
	

	return 0;
}


Prev day :
