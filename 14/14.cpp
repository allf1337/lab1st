
#include "classes.h"
#include <cstdio>
#include <math.h>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int ax, ay, bx, by, cx, cy, fl;

	cout << "Point A:";
	cin >> ax >> ay;
	cout << "Point B:";
	cin >> bx >> by;
	cout << "Point C:";
	cin >> cx >> cy;
	cout << "First Line: ";
	cin >> fl;


	Point A(ax, ay), B(bx, by), C(cx, cy);
	Trap trap(A, B, C, fl);

	cout << "Trap area: " << trap.getArea() << endl;


	system("pause");
	return 0;
}

