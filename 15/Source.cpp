#define _USE_MATH_DEFINES
//#include <math.h>
#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix() {};
Matrix::Matrix(double A1, double A2, double B1, double B2) {
	a1 = A1;
	a2 = A2;
	b1 = B1;
	b2 = B2;
};

istream& operator >> (istream& in, Matrix& m)//cin
{
	in >> m.a1 >> m.a2 >> m.b1 >> m.b2;
	return in;
}

ostream& operator << (std::ostream& out, Matrix& m)
{
	out << m.a1 << ' ' << m.a2 << endl;
	out << m.b1 << ' ' << m.b2 << endl;
	return out;
}

Matrix Matrix::operator + (Matrix m) {
	Matrix raz;
	raz.a1 = a1 + m.a1;
	raz.a2 = a2 + m.a2;
	raz.b1 = b1 + m.b1;
	raz.b2 = b2 + m.b2;
	return raz;
}




Matrix Matrix::operator * (Matrix m) {


	Matrix dif;
	dif.a1 = a1 * m.a1 + a2 * m.b1;
	dif.a2 = a1 * m.a2 + a2 * m.b2;
	dif.b1 = b1 * m.a1 + b2 * m.b1;
	dif.b2 = b1 * m.a2 + b2 * m.b2;
	return dif;
}
