/***************************************************************
 *                                                             *
 * Файл     : geometry.cpp                                     *
 *                                                             *
 * Описание : модуль, содержащий реализацию методов классов    *
 *            для решения геометрических задач                 *
 *                                                             *
 ***************************************************************/
#include <iostream>
#include <cmath>
#include "geometry.h"

using namespace std;
// -------------------------------------------------------------
//       Методы класса "Точка" 
// -------------------------------------------------------------

// конструктор: точка задается своими координатами
Point::Point(double X, double Y) {
	x = X; y = Y;
}

// прочитать координату Х
double Point::getX() {
	return x;
}

// прочитать координату У
double Point::getY() {
	return y;
}

// -------------------------------------------------------------
//       Методы класса "Окружность" 
// -------------------------------------------------------------

// конструктор: окружность задается центром и радиусом
Circle::Circle(Point Center, double R) :center(Center) {
	r = R;
}

// прочитать центр окружности
Point Circle::getCenter() {
	return center;
}

// прочитать радиус окружности
double Circle::getR() {
	return r;
}

// -------------------------------------------------------------




// -------------------------------------------------------------
//       Методы класса "Отрезок" 
// -------------------------------------------------------------

// конструктор: отрезок задается двумя точками
Segment::Segment(Point p1, Point p2) {
	x1 = p1.getX(); y1 = p1.getY();
	x2 = p2.getX(); y2 = p2.getY();
}

// найти середину отрезка
Point Segment::getMidpoint() {
	return Point((x1 + x2) / 2, (y1 + y2) / 2);
}

// найти длину отрезка
double Segment::getLength() {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

// Методы класса "Вектор"

Vector::Vector(Point p1, Point p2) {
	x1 = p1.getX(); y1 = p1.getY();
	x2 = p2.getX(); y2 = p2.getY();
}

double Vector::getLengthVector() {
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

double Vector::getVectorX() {
	return (x2 - x1);
}

double Vector::getVectorY() {
	return (y2 - y1);
}

ostream& operator << (ostream& out, Point point) {
	out << "(" << point.getX() << ";" << point.getY() << ")" << endl;
	return out;
}

ostream& operator << (ostream& out, Vector vector) {
	out << "(" << vector.getVectorX() << ";" << vector.getVectorY() << ")" << endl;
	return out;
}
ostream& operator << (ostream& out, Circle circle) {
	out << "Центр окружности расположен в точке ("
		<< circle.getCenter().getX() << ',' << circle.getCenter().getY()
		<< "), радиус = " << circle.getR() << endl;
	return out;
}


