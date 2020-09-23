#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int h,S;
	cout << "Введите высоту куба h: ";
	cin >> h;
	S = 6 * pow(h, 2);
	cout << "Площадь поверхности куба равна: " << S << endl;
	
	return 0;
}
