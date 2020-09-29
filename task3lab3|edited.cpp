#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <clocale>
using namespace std;
 
int main()
{setlocale(LC_ALL, "Russian");
double z, x, y, min_1, min_2, max_1, max_2;
	std::cout<<"Введите x"<<endl;
	std::cin>>x;
	std::cout<<"Введите y"<<endl;
	std::cin>>y;
		if (x<5)
			min_1=x;
		else 
			min_1=5;
		if (y>M_E)
			max_1=y;
		else 
			max_1=M_E; 
		if (min_1>max_1)
			max_2=min_1;
		else 
			max_2=max_1;
		if (M_E<fabs(y-x))
			min_2=M_E;
		else 
			min_2=fabs(y-x);
	std::cout << max_2/min_2<<endl;
return 0;
}

