#pragma once
#include <cstdio>
#include <math.h>
#include <cmath>
#include <iostream>

class Point {
	int x, y;
public:
	Point(int X, int Y);
	int getX();
	int getY();
};

class Triangle {
	int ax, ay, bx, by, cx, cy;
public:
	Triangle(Point A, Point B, Point C);
	double getVecAB();
	double getVecBC();
	double getVecAC();
	double getHeight();
};

class Trap : public Triangle {
	double a;
public:
	double h = getHeight();

	Trap(Point A, Point B, Point C, double firstLine);
	double getArea();
};
