/***************************************************************
 *                                                             *
 * Файл     : lab13.cpp                                     *
 *                                                             *
 * Описание : главный файл проекта для демонстрации            *
 *            использования объектов для решения               *
 *            геометрических задач                             *
 *                                                             *
 ***************************************************************
 *                                                             *
 * Дано     : Координаты вершин треугольника.                  *
 * Найти    : Описанную около этого треугольника окружность.   *
 *                                                             *
 ***************************************************************/

#include <windows.h>
#include "geometry.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
	SetConsoleOutputCP(1251);

	// ----- ввод исходных данных -----
	double x1, y1, x2, y2;
	cout << "Введите координаты первой точки ===> ";
	cin >> x1 >> y1;
	cout << "Введите координаты второй точки ===> ";
	cin >> x2 >> y2;


	// ----- создание точек - вершин треугольника -----
	Point A = Point(x1, y1),
		D = Point(x2, y2);


	// ----- создание отрезков - сторон треугольника -----
	Segment Otrezok1 = Segment(A, D);


	// ----- создание точек - середин сторон треугольника -----
	Point S1 = Otrezok1.getMidpoint();






	// ----- создание отрезка - радиуса -----
	Segment Radius = Segment(S1, A);

	// ----- создание окружности с заданным центром и радиусом -----
	Circle circle = Circle(S1, Radius.getLength());

	Vector vector = Vector(A, D);



	ofstream fout;
	fout.open("output.txt");

	if (!fout.is_open()) {
		cout << "Ошибка!!!";
	}
	else {
		fout << "A" << A;
		fout << "D" << D;
		fout << circle;
		fout << "AD" << vector;

		cout << "Все данные успешно выведены в файл output.txt!!!";
	}
	fout.close();




	Sleep(9999);
	return 0;
}

// ================= конец программы ===========================
