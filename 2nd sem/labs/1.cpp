#include "stdafx.h"
#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int N, K,itog,itog2;
	cout << "Введите N рублей: ";
	cin >> N;
	cout << "Введите достоинство K рублей: ";
	cin >> K;
	itog = (N / K);
	itog2 = N % K;
	cout << itog << " достоинством в " << K << " рублей " << itog2 << " достоинством в 1 рубль" << endl;
	return 0;

}
