// Laba15Ian.cpp: определяет точку входа для консольного приложения.
//


#define _USE_MATH_DEFINES
#include <iostream>
#include "matrix.h"
#include <math.h>
//#include "source.cpp";
using namespace std;
int main()
{
	setlocale(0, "");
	Matrix m1, m2, pluss, umn;
	cout << "Введите первую матрицу" << endl;
	cin >> m1;
	cout << "Введите вторую матрицу" << endl;
	cin >> m2;

	cout << "Матрица 1:" << endl;
	cout << m1;
	cout << "Матрица 2:" << endl;
	cout << m2;

	pluss = m1 + m2;
	umn = m1 * m2;

	cout << "Сумма матриц:" << endl;
	cout << pluss;
	cout << "Произведение матриц:" << endl;
	cout << umn;
	system("pause");
	return 0;
}

