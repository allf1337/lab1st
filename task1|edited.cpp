#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int R, r, S;
	std::cout << "Введите внешний радиус кольца R: \n";
	std::cin >> R;
		if (R < 0 || (std::cin.fail())) {
			cout << "Некорректное значение R \n";
				return 0; }
	std::cout << "Введите внутренний радиус кольца r: \n";
	std::cin >> r;
		if (r < 0 || (std::cin.fail())) {
			cout << "Некорректное значение r \n";
				return 0; }
	S = M_PI *(pow(R,2) - pow(r,2));
	std::cout << "Площадь кольца равна: " << S << endl;
	
	return 0;
}
