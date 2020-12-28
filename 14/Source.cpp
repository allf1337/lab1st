#include <cstdio>
#include <math.h>
#include "classes.h"
#include <cmath>
#include <iostream>

// Point
Point::Point(int X, int Y) {
	x = X;
	y = Y;
}

int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}

// Triangle
Triangle::Triangle(Point A, Point B, Point C) {
	ax = A.getX();
	ay = A.getY();
	bx = B.getX();
	by = B.getY();
	cx = C.getX();
	cy = C.getY();
}

double Triangle::getVecAB() {
	double length = sqrt((bx - ax) * (bx - ax) + (by - ay) * (by - ay));
	return length;
}

double Triangle::getVecAC() {
	double length = sqrt((cx - ax) * (cx - ax) + (cy - ay) * (cy - ay));
	return length;
}

double Triangle::getVecBC() {
	double length = sqrt((cx - bx) * (cx - bx) + (cy - by) * (cy - by));
	return length;
}

double Triangle::getHeight() {
	double hp = (getVecAB() + getVecAC() + getVecBC()) / 2;
	double height = sqrt((hp - getVecAB()) * (hp - getVecAC()) * (hp - getVecBC()));
	return height;
}

// Trap
Trap::Trap(Point A, Point B, Point C, double firstLine) : Triangle(A, B, C) {
	//double hp = (getVecAB() + getVecAC() + getVecBC()) / 2;
	a = firstLine;
	//a = firstLine;

}

double Trap::getArea() {
	double hp = (getVecAB() + getVecAC() + getVecBC()) / 2;

	double area = (sqrt(hp - a)) * h;
	return area;
}


//class Trap : public Triangle {
//	double h = getHeight();
//	int a, b;
//public:
//	Trap(Point A, Point B, Point C, int firstLine, int secondLine) : Triangle(A, B, C) {
//		a = firstLine;
//		b = secondLine;
//	};
//
//	double getArea() {
//		double area = (a + b) / 2 * h;
//		return area;
//	}
//};
