/***************************************************************
 *                                                             *
 * Файл     : iostudent.cpp                                    *
 *                                                             *
 * Описание : реализация функций для организации потокового    *
 *            ввода-вывода переменных структурных типов        *
 *            данных STUDENT (Студент) и GROUP (Группа)        *
 *                                                             *
 ***************************************************************/
#include "pch.h"
#include "iostudent.h"
#include <iostream>

using namespace std;

// ======= Ввод информации о студенте из входного потока =======
istream& operator >> (istream &in, STUDENT & Student)
{
	in >> Student.NumberState;
	in >> Student.Model;
	in >> Student.NumberStay;
	in >> Student.NumberSit;
	in >> Student.year;
	in >> Student.NumberAll;
	return in;
}

// ======= Вывод информации о студенте в выходной поток ========
ostream& operator << (ostream &out, STUDENT Student)
{
	out.width(4);
	out.fill('0');
	out << Student.NumberState << " "
		<< Student.Model << " "
		<< Student.NumberStay << " "
		<< Student.NumberSit << ". "
		<< Student.year << " . "
		<< Student.NumberAll << "\n";
	return out;
}


// ======= Ввод информации о группе из входного потока =========
istream& operator >> (istream &in, GROUP & Group)
{
	in >> Group.Name;
	in >> Group.N;
	Group.Student = new STUDENT[Group.N];
	for (int i = 0; i < Group.N; i++)
	{
		in >> Group.Student[i];
	}
	return in;
}




ostream& operator << (ostream &out, GROUP Group)
{
	out << "Список группы " << Group.Name << endl;
	for (int i = 0; i < Group.N; i++) out << Group.Student[i];
	return out;
}

