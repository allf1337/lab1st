#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <clocale>
using namespace std;
 
int main()
{setlocale(LC_ALL, "Russian");
double x, y;
    std::cout << "Введите x: ";
    std::cin >>x;
    std::cout << "Введите y: ";
    std::cin >>y;
        if (((x+2)*(x+2))+((y-1)*(y-1))==1) 
            std::cout << "На границе окружности. ";
        if (2*x-y+1==0) 
            std::cout <<"На прямой. "; 
        if (y==((x+3)*(x+3))+1)
            std::cout << "На параболе. ";
        if ((((x+2)*(x+2))+((y-1)*(y-1))<1) && (2*x-y+1<1) && (y<((x+3)*(x+3))+1) && (x<0) )
            std::cout << "Область 1 ";
        if ((((x+2)*(x+2))+((y-1)*(y-1))>1) && (y>((x+3)*(x+3))+1) && (x>0))
            std::cout << "Область 2 ";
 return 0;
}

