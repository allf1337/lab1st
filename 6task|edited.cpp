#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x1,y1,x2,y2,h,S;
	std::cout <<"x1= ";
	std::cin >> x1;
		if (std::cin.fail()) 
			{std::cout << "Некорректное значение x1! \n";
				return 0;}
	std::cout <<"y1= ";
	std::cin >> y1;
		if (std::cin.fail()) 
  			{std::cout << "Некорректное значение y1! \n";
  				return 0;}
	std::cout <<"x2= ";
	std::cin >> x2;
		if (std::cin.fail()) 
  			{std::cout << "Некорректное значение x2! \n";
  				return 0;}
	std::cout <<"y2= ";
	std::cin >> y2;
		if (std::cin.fail()) 
  			{std::cout << "Некорректное значение y2! \n";
  				return 0;}
	if (x1!=x2) h=x2-x1;
	    else h=y2-y1;
	S = h*h*6;
	
	cout <<"S= " << S;

	return 0;
}
