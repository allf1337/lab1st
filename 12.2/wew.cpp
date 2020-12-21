
Project1:



main.cpp

/***************************************************************
*                                                             *
* Файл     : main.cpp                                         *
*                                                             *
* Описание : главный файл проекта для демонстрации            *
*            потокового ввода-вывода структурных типов        *
*            данных STUDENT (Студент) и GROUP (Группа)        *
*                                                             *
***************************************************************/
#include "pch.h"
#include <iostream>
#include <fstream>
#include <windows.h>

#include "students.h"
#include "iostudent.h"

using namespace std;

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char FileName[100];
	cout << "Из какого файла вводить данные?\n";
	cin.getline(FileName, sizeof(FileName));

	GROUP Group;
	// создать поток для ввода данных из файла
	ifstream fin(FileName);

	if (fin.is_open()) {
		// прочитать группу из этого потока
		ReadGroup(fin, &Group);
		// закрыть поток
		fin.close();

		// вывести группу в поток cout (на экран)
		WriteGroup(cout, Group);

		cout << "В какой файл выводить данные?\n";
		cin.getline(FileName, sizeof(FileName));

		// создать поток для вывода данных в файл
		ofstream fout(FileName);
		if (fout.is_open())
		{
			// записать группу в этот файл
			WriteGroup(fout, Group);
			fout.close();
			cout << "Данные выведены в файл " << FileName << endl;
		}
		else
		{
			cout << "Ошибка записи в файл " << FileName << endl;
		}
	}
	else
	{
		cout << "Файл " << FileName << " не найден\n";
	}



	Sleep(7654);
	return 0;
}

// ===================== конец программы =======================

students.h

#pragma once
/***************************************************************
*                                                             *
* Файл     : students.h                                       *
*                                                             *
* Описание : заголовочный файл, описывающий структурные типы  *
*            данных STUDENT (Студент) и GROUP (Группа)        *
*                                                             *
***************************************************************/

#ifndef STUDENTS_H
#define STUDENTS_H



// ------- описание структурного типа данных СТУДЕНТ -----------
struct STUDENT {
	char LastName[15];     // Фамилия
	char FirstName[15];    // Имя
	char MiddleName[15];   // Отчество
	int Number;            // Номер студенческого
	int Estimation;
};

// ------- описание структурного типа данных ГРУППА ------------
struct GROUP {
	char Name[5];          // Название группы
	int N;                 // Количество студентов
	STUDENT * Student;     // Массив студентов
};

#endif

// =============== конец заголовочного файла  ==================


iostudent.h

/***************************************************************
 *                                                             *
 * Файл     : iostudent.h                                      *
 *                                                             *
 * Описание : заголовочный файл, описывающий функции           *
 *            для организации потокового ввода-вывода          *
 *            переменных структурных типов данных              *
 *            STUDENT (Студент) и GROUP (Группа)               *
 *                                                             *
 ***************************************************************/

#ifndef IOSTUDENT_H
#define IOSTUDENT_H

#include <iostream>
#include "students.h"
#include <fstream>

using namespace std;

 // Ввод информации о студенте из входного потока
STUDENT ReadStudent(istream &in);

// Вывод информации о студенте в выходной поток
void WriteStudent(ostream &out, STUDENT Student);

// Ввод информации о группе из входного потока
void ReadGroup(istream &in, GROUP *Group);

// Вывод информации о группе в выходной поток
void WriteGroup(ostream &out, GROUP Group);



#endif

// =============== конец заголовочного файла  ==================


iostudent.cpp

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

Project2:


main2.cpp

/***************************************************************
 *                                                             *
 * Файл     : main.cpp                                         *
 *                                                             *
 * Описание : главный файл проекта для демонстрации            *
 *            потокового ввода-вывода структурных типов        *
 *            данных STUDENT (Студент) и GROUP (Группа)        *
 *                                                             *
 ***************************************************************/

#include <iostream.h>
#include <fstream.h>
#include <windows.h>

#include "students.h"
#include "iostudent.h"

int main(int argc, char* argv[])
  {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  char FileName[100];
  cout<<"Из какого файла вводить данные?\n";
  cin.getline(FileName,sizeof(FileName));

  GROUP Group;
  // создать поток для ввода данных из файла
  ifstream fin(FileName);

  if (fin.is_open()) {
    // прочитать группу из этого потока
    fin>>Group;
    // закрыть поток
    fin.close();

    // вывести группу в поток cout (на экран)
    cout<<Group;

    cout<<"В какой файл выводить данные?\n";
    cin.getline(FileName,sizeof(FileName));

    // создать поток для вывода данных в файл
    ofstream fout(FileName);
    if (fout.is_open())
      {
      // записать группу в этот файл
      fout<<Group;
      fout.close();
      cout << "Данные выведены в файл " << FileName << endl;
      }
    else
      {
      cout << "Ошибка записи в файл " << FileName << endl;
      }
    }
  else
    {
    cout << "Файл " << FileName << " не найден\n";
    }

  Sleep(7654);
  return 0;
  }

// ===================== конец программы =======================

students.h

/***************************************************************
 *                                                             *
 * Файл     : students.h                                       *
 *                                                             *
 * Описание : заголовочный файл, описывающий структурные типы  *
 *            данных STUDENT (Студент) и GROUP (Группа)        *
 *                                                             *
 ***************************************************************/

#ifndef STUDENTS_H
#define STUDENTS_H

// ------- описание структурного типа данных СТУДЕНТ -----------
struct STUDENT {
  char LastName[15];     // Фамилия
  char FirstName[15];    // Имя
  char MiddleName[15];   // Отчество
  int Number;            // Номер студенческого
};

// ------- описание структурного типа данных ГРУППА ------------
struct GROUP {
  char Name[5];          // Название группы
  int N;                 // Количество студентов
  STUDENT * Student;     // Массив студентов
};

// =============== конец заголовочного файла  ==================
#endif

iostudent.h

/***************************************************************
 *                                                             *
 * Файл     : iostudent.h                                      *
 *                                                             *
 * Описание : заголовочный файл, описывающий операторы         *
 *            для организации потокового ввода-вывода          *
 *            переменных структурных типов данных              *
 *            STUDENT (Студент) и GROUP (Группа)               *
 *                                                             *
 ***************************************************************/

#ifndef IOSTUDENT_H
#define IOSTUDENT_H

#include <iostream.h>
#include "students.h"

// Ввод информации о студенте из потока
istream& operator >> (istream &in, STUDENT & Student);

// Вывод информации о студенте в выходной поток
ostream& operator << (ostream &out, STUDENT Student);

// Ввод информации о группе из входного потока
istream& operator >> (istream &in, GROUP &Group);

// Вывод информации о группе в выходной поток
ostream& operator << (ostream &out, GROUP Group);

// =============== конец заголовочного файла  ==================
#endif

iostudent.cpp

/***************************************************************
 *                                                             *
 * Файл     : iostudent.cpp                                    *
 *                                                             *
 * Описание : реализация операторов для организации потокового *
 *            ввода-вывода переменных структурных типов        *
 *            данных STUDENT (Студент) и GROUP (Группа)        *
 *                                                             *
 ***************************************************************/

#include "iostudent.h"

// ======= Ввод информации о студенте из входного потока =======
istream& operator >> (istream &in, STUDENT & Student)
  {
  in >> Student.LastName;
  in >> Student.FirstName;
  in >> Student.MiddleName;
  in >> Student.Number;
  return in;
  }

// ======= Вывод информации о студенте в выходной поток ========
ostream& operator << (ostream &out, STUDENT Student)
  {
  out.width(8);
  out.fill('0');
  out << Student.Number << " "
      << Student.LastName << " "
      << Student.FirstName[0] << ". "
      << Student.MiddleName[0] << ".\n";
  return out;
  }

// ======= Ввод информации о группе из входного потока =========
istream& operator >> (istream &in, GROUP & Group)
  {
  in >> Group.Name;
  in >> Group.N;
  Group.Student=new STUDENT[Group.N];
  for (int i=0;i<Group.N;i++)
    {
    in >> Group.Student[i];
    }
  return in;
  }

// ====== Вывод информации о группе в выходной поток ===========
ostream& operator << (ostream &out, GROUP Group)
  {
  out << "Список группы " << Group.Name << endl;
  for(int i=0;i<Group.N;i++) out << Group.Student[i];
  }

// ====================== конец модуля =========================

students.txt

ПП
3
Иванов Иван Иванович 1234
Петров Петр Петрович 9876
Сидоров Сидор Сидорович 5555
