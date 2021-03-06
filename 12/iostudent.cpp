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


	char Model[15];
	int NumberStay;
	int NumberSit;
	int year;
	int NumberAll;


	in >> student.NumberState;
	in >> student.Model;
	in >> student.NumberStay;
	in >> student.NumberSit;
	in >> student.year;
	in >> student.NumberAll;
	return student;
}

// ======= Вывод информации о студенте в выходной поток ========
void WriteStudent(ostream &out, STUDENT Student)
{
	out.width(4);
	out.fill('0');
	out << Student.NumberState << " "
		<< Student.Model << " "
		<< Student.NumberStay << " "
		<< Student.NumberSit << ". "
		<< Student.year << " . "
		<< Student.NumberAll << "\n";
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
/*void WriteGroup(ostream &out, GROUP Group)
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
*/


void WriteGroup(ostream &out, GROUP Group)
{

	//SortPersons(depart);
	for (int i = 0; i < Group.N; ++i)
		WriteStudent(out, Group.Student[i]);
}

/*void SortPersons(Persdepart bS)
{
	for (int i = 1; i < bS.N; ++i)
	{
		for (int c = i; c > 0; --c)
		{
			if (bS.persons[c].year > bS.persons[c - 1].year)
				swap(bS.persons[c], bS.persons[c - 1]);
		}
	}
}

*/
// ====================== коне
