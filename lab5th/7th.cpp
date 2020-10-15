#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>



using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
double x_start, x_end, y1, y2, y3, x_d, a, b, k;
cout << "Введите X начальное: ";
	cin >> x_start;
cout << "Введите X конечное: ";
	cin >> x_end;
cout<< "Введите шаг dX: ";
	cin >>x_d;
cout<< "Введите а: ";
	cin >> a;
cout <<"Введите b: ";
	cin >> b;
	if (x_start > x_end)
	{
		k = x_start;
		x_start = x_end;
		x_end = k;
	}
cout << "   X |    Y1   |    Y2   |    Y3   |" << endl;
cout << "---------------------------------" << endl;
while (x_start <= x_end)
{
	if (x_start <= 0)
		y1 = pow(a,-x_start);
	else y1 = cos(b*x_start);
	if (x_start <= 1)
		y2 = a*sqrt(1-x_start);
	else y2 = b*log(3.*x_start);
	if (x_start <= 2)
		y3 = sqrt(1-cos(3.14*x_start)/2);
	else y3 = b*(pow(3,(x_start - 2)));
cout.width(4); cout.precision(4);
cout << x_start << " | ";
cout.width(7); cout.precision(4);
cout<< y1 << " | ";
cout.width(7); cout.precision(4);
cout << y2 << " | ";
cout.width(7); cout.precision(4);
cout << y3 << " | "<< endl;
	x_start = x_start + x_d;
}
cin.get();
system("pause");
return 0;
}
