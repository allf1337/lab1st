#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int R, r, S;
	cout << "Введите внешний радиус кольца R:";
	cin >> R;
	cout << "Введите внутренний радиус кольца r:";
	cin >> r;
	S = M_PI *(pow(R,2) - pow(r,2));
	
	cout << "Площадь кольца равна: " << S << endl;
	
	return 0;
}
