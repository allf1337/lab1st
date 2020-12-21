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
STUDENT ReadStudent(istream &in)
{
	STUDENT student;
	in >> student.FirstName;
	in >> student.LastName;
	in >> student.MiddleName;
	in >> student.Number;
	in >> student.Estimation;
	return student;
}

// ======= Вывод информации о студенте в выходной поток ========
void WriteStudent(ostream &out, STUDENT Student)
{
	out.width(8);
	out.fill('0');
	out << Student.Number << " "
		<< Student.FirstName << " "
		<< Student.LastName[0] << ". "
		<< Student.MiddleName[0] << " . "
		<< Student.Estimation << "\n";
}

// ======= Ввод информации о группе из входного потока =========
void ReadGroup(istream &in, GROUP *Group)
{
	in >> Group->Name;
	in >> Group->N;
	Group->Student = new STUDENT[Group->N];
	for (int i = 0; i < Group->N; i++)
	{
		Group->Student[i] = ReadStudent(in);
	}
}

// ====== Вывод информации о группе в выходной поток ===========
void WriteGroup(ostream &out, GROUP Group)
{
	int j = 0;
	out << "Список группы " << Group.Name << endl;
	for (int i = 0; i < Group.N; i++) {
		for (j = i; j > 0 && Group.Student[j - 1].Estimation < Group.Student[j].Estimation; j--) {
			swap(Group.Student[j - 1], Group.Student[j]);
		}

	}
	for (int i = 0; i < Group.N; i++) WriteStudent(out, Group.Student[i]);
	out << "Неуспевающие студенты: ";
	out << endl;
	for (int i = 0; i < Group.N; i++) {
		if ((Group.Student[i].Estimation) < 4) {
			WriteStudent(out, Group.Student[i]);
		}
	}
}



// ====================== коне
