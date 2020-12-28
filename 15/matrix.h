#pragma once
//#ifndef MATRIX_H
//#define MATRIX_H
using namespace std;
class Matrix {
	double a1, a2, b1, b2;
public:
	Matrix();
	Matrix(double A1, double A2, double B1, double B2);
	Matrix  operator + (Matrix);
	Matrix  operator * (Matrix);

	//friend Matrix GetQuolent(Matrix m);
	friend std::istream& operator >> (std::istream&, Matrix&);
	friend std::ostream& operator << (std::ostream&, Matrix&);
};
//#endif
