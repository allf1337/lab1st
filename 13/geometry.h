#pragma once
/***************************************************************
 *                                                             *
 * Файл     : geometry.h                                       *
 *                                                             *
 * Описание : заголовочный файл с описанием набора классов     *
 *            для решения геометрических задач                 *
 *                                                             *
 ***************************************************************/
#include <iostream>
#ifndef GEOMETRY_H
#define GEOMETRY_H

using namespace std;

// --------- Класс "Точка" ---------------

class Point {
	double x, y; // координаты точки
public:
	Point(double X, double Y); // конструктор класса
	double getX();             // чтение поля X
	double getY();             // чтение поля Y
};


// --------- Класс "Окружность" ----------

class Circle {
	Point center; // центр окружности
	double r;     // радиус окружности
public:
	Circle(Point Center, double R);   // конструктор класса
	Point getCenter();                // чтение поля Center
	double getR();                    // чтение поля R
};

// --------- Класс "Прямая" --------------



// --------- Класс "Отрезок" -------------

class Segment {
	double x1, y1, x2, y2; // координаты концов отрезка
public:
	Segment(Point p1, Point p2);       // конструктор класса
	Point getMidpoint();              // найти середину отрезка
	double getLength();               // найти длину отрезка
};

class Vector {
	double x1, y1, x2, y2;
public:
	Vector(Point p1, Point p2);
	double getLengthVector();
	double getVectorX();
	double getVectorY();
};

ostream& operator << (ostream& out, Point point);

ostream& operator << (ostream& out, Vector vector);

ostream& operator << (ostream& out, Circle circle);
#endif

// =============== конец заголовочного файла  ==================#pragma once
