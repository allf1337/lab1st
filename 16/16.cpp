#include "Header.h"
#include <math.h>
#include <cmath>
#include <algorithm>
#include <iostream>



using namespace std;


int main()
{

	setlocale(LC_ALL, "Russian");
	double  n, m;
	cout << "Введите N массива: ";
	cin >> n;
	cout << "Введите M массива: ";
	cin >> m;
	//my_class  <int> c(n, m);
	//c.C();
	//c.show();
	my_class<double> array1(n, m);
	array1.C();
	cout << array1;



	////unsigned int n = 2, m = 2;
	//int i = 0;
	//int j = 0;
	//Array<int> array1(n, m,i,j);
	//array1.populateArray();
	//cout << array1;


	system("pause>0");
	return 0;
}
