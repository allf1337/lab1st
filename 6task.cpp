#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int x1,y1,x2,y2,h,S;
	cout <<"x1= ";
	cin >> x1;
	cout <<"y1= ";
	cin >> y1;
	cout <<"x2= ";
	cin >> x2;
	cout <<"y2= ";
	cin >> y2;
	if (x1!=x2) h=x2-x1;
	    else h=y2-y1;
	S = h*h*6;
	
	cout <<"S= " << S;

	return 0;
}