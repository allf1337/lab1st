Задание 1. Изучите пример обработки структурных типов данных. Подготовьте приложение, убедитесь в его работоспособности.

Задание 2. В соответствии с вариантом разработайте программу для обработки структурных типов данных. Реализуйте отдельные функции для ввода, вывода, поиска информации по некоторому условию, сортировки по некоторому признаку.

  
  Автобусный ПАРК: гос.номер АВТОБУСА, модель, год выпуска, количество мест для сидения, количество мест для стояния. Упорядочьте по убыванию года выпуска. Выведите список автобусов требуемой вместительности.
    
    
    
    /***************************************************************
 *                                                             *
 * Файл     : students.cpp                                     *
 *                                                             *
 * Описание : пример программы для обработки структурных типов *
 *            данных STUDENT (Студент) и GROUP (Группа)        *
 *                                                             *
 ***************************************************************/

#include <iostream.h>>
#include <windows.h>

// ================ описание типов данных ======================

// ------- описание структурного типа данных СТУДЕНТ -----------
struct STUDENT {
  char LastName[15];     // Фамилия
  char FirstName[15];    // Имя
  char MiddleName[15];   // Отчество
  int Number;            // Номер студенческого билета
};

// ------- описание структурного типа данных ГРУППА ------------
// максимальное количество студентов в группе
#define MAX_STUDENT 30
struct GROUP {
  char Name[5];          // Название группы
  int N;                 // Количество студентов
  STUDENT Student[MAX_STUDENT];  // Массив студентов
};

// =============== описание прототипов функций =================

// Ввод информации о студенте с клавиатуры
STUDENT InputStudent(void);

// Вывод информации о студенте на экран
void OutputStudent(STUDENT Student);

// Ввод информации о группе с клавиатуры
void InputGroup(GROUP *Group);

// Вывод информации о группе на экран
void OutputGroup(GROUP Group);

// =============== основная функция программы ==================

int main(int argc, char* argv[])
  {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);

  GROUP Group;
  InputGroup(&Group);
  OutputGroup(Group);

  Sleep(7654);
  return 0;
  }

// ============ Ввод информации о студенте с клавиатуры ========
STUDENT InputStudent(void)
  {
  STUDENT student;
  cout << "Введите фамилию ====> ";
  cin >> student.LastName;
  cout << "Введите имя ========> ";
  cin >> student.FirstName;
  cout << "Введите отчество ===> ";
  cin >> student.MiddleName;
  cout << "Введите номер студенческого билета ===> ";
  cin >> student.Number;
  return student;
  }

// ============ Вывод информации о студенте на экран ===========
void OutputStudent(STUDENT Student)
  {
  cout.width(8);
  cout.fill('0');
  cout << Student.Number << " "
       << Student.LastName << " "
       << Student.FirstName[0] << ". "
       << Student.MiddleName[0] << ".\n";
  }

// ============ Ввод информации о группе с клавиатуры ==========
void InputGroup(GROUP *Group)
  {
  cout << "Введите название группы ===> ";
  cin >> Group->Name;
  cout << "Введите количество студентов (не более "
       << MAX_STUDENT << ") ===> ";
  cin >> Group->N;
  for (int i=0;i<Group->N;i++)
    {
    cout << "Введите информацию о " << (i+1) << "-ом студенте\n";
    Group->Student[i]=InputStudent();
    }
  }

// ============ Вывод информации о группе на экран =============
void OutputGroup(GROUP Group)
  {
  cout << "Список группы " << Group.Name << "\n";
  for(int i=0;i<Group.N;i++) OutputStudent(Group.Student[i]);
  }

// ===================== конец программы =======================












/***************************************************************
*                                                             *
* Файл     : students.cpp                                     *
*                                                             *
* Описание : пример программы для обработки структурных типов *
*            данных STUDENT (Студент) и GROUP (Группа)        *
*                                                             *
***************************************************************/

#include <iostream>>
#include <windows.h>
#include "pch.h"

// ================ описание типов данных ======================

// ------- описание структурного типа данных АВТОБУС -----------
struct BUS {
	int StateNumber;     // гос.номер
	char Model[15];    // Модель
	int Year[15];   // Год выпуска
	int NumberStay; // Мест стоя
	int NumberSit; // Мест сидя
};

// ------- описание структурного типа данных ГРУППА ------------
// максимальное количество студентов в группе
#define MAX_BUS 30
struct GROUP {
	char Name[5];          // Название группы
	int N;                 // Количество студентов
	BUS Student[MAX_BUS];  // Массив студентов
};

// =============== описание прототипов функций =================

// Ввод информации о студенте с клавиатуры
BUS InputBUS(void);

// Вывод информации о студенте на экран
void OutputBUS(BUS BUS);

// Ввод информации о группе с клавиатуры
//void InputGroup(GROUP *Group);

// Вывод информации о группе на экран
//void OutputGroup(GROUP Group);

// =============== основная функция программы ==================

int main(int argc, char* argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	GROUP Group;
	InputGroup(&Group);
	OutputBus(Group);

	Sleep(7654);
	return 0;
}

// ============ Ввод информации о студенте с клавиатуры ========
BUS InputStudent(void)
{
	BUS bus;
	cout << "Гос. номер ====> ";
	cin >> bus.StateNumber;
	cout << "Модель ========> ";                                       
	cin >> bus.Model;
	cout << "Год ===> ";
	cin >> bus.Year;
	cout << "Мест стоя ===> ";
	cin >> bus.NumberStay;
	cout << "Мест сидя ===> ";
	cin >> bus.NumberSit;

	return bus;
}

// ============ Вывод информации о студенте на экран ===========
void OutputBus(BUS Bus)
{
	cout.width(8);
	cout.fill('0');
	cout << Bus.StateNumber << " "
		<< Bus.Model << " "
		<< Bus.Year[0] << ". "
		<< Bus.NumberSit[0] << ". "
		<< Bus.NumberStay[0] << ".\n";
}

// ============ Ввод информации о группе с клавиатуры ==========
void InputGroup(GROUP *Group)
{
	cout << "Введите название группы ===> ";
	cin >> Group->Name;
	cout << "Введите количество студентов (не более "
		<< MAX_BUS << ") ===> ";
	cin >> Group->N;
	for (int i = 0; i < Group->N; i++)
	{
		cout << "Введите информацию о " << (i + 1) << "-ом студенте\n";
		Group->Bus[i] = InputBUS();
	}
}

// ============ Вывод информации о группе на экран =============
//void OutputGroup(GROUP Group)
//{
	//cout << "Список группы " << Group.Name << "\n";
//	for (int i = 0; i < Group.N; i++) OutputBus(Group.Bus[i]);
//}

// ===================== конец программы ==
























FINAL 


/***************************************************************
*                                                             *
* Файл     : students.cpp                                     *
*                                                             *
* Описание : пример программы для обработки структурных типов *
*            данных STUDENT (Студент) и GROUP (Группа)        *
*                                                             *
***************************************************************/


#include <windows.h>
#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;



// ================ описание типов данных ======================

// ------- описание структурного типа данных СТУДЕНТ -----------
struct STUDENT {
	char LastName[15];     // Фамилия
	char FirstName[15];    // Имя
	char MiddleName[15];   // Отчество
	int Number;            // Номер студенческого билета
};

// ------- описание структурного типа данных ГРУППА ------------
// максимальное количество студентов в группе
#define MAX_STUDENT 30
struct GROUP {
	char Name[5];          // Название группы
	int N;                 // Количество студентов
	STUDENT Student[MAX_STUDENT];  // Массив студентов
};

// =============== описание прототипов функций =================

// Ввод информации о студенте с клавиатуры
STUDENT InputStudent(void);

// Вывод информации о студенте на экран
void OutputStudent(STUDENT Student);

// Ввод информации о группе с клавиатуры
void InputGroup(GROUP *Group);

// Вывод информации о группе на экран
void OutputGroup(GROUP Group);

// =============== основная функция программы ==================

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	GROUP Group;
	InputGroup(&Group);
	OutputGroup(Group);

	//Sleep(7654);
	return 0;
}

// ============ Ввод информации о студенте с клавиатуры ========
STUDENT InputStudent(void)
{
	STUDENT student;
	cout << "Введите фамилию ====> ";
	cin >> student.LastName;
	cout << "Введите имя ========> ";
	cin >> student.FirstName;
	cout << "Введите отчество ===> ";
	cin >> student.MiddleName;
	cout << "Введите номер студенческого билета ===> ";
	cin >> student.Number;
	return student;
}

// ============ Вывод информации о студенте на экран ===========
void OutputStudent(STUDENT Student)
{
	cout.width(8);
	cout.fill('0');
	cout << Student.Number << " "
		<< Student.LastName << " "
		<< Student.FirstName[0] << ". "
		<< Student.MiddleName[0] << ".\n";
}

// ============ Ввод информации о группе с клавиатуры ==========
void InputGroup(GROUP *Group)
{
	cout << "Введите название группы ===> ";
	cin >> Group->Name;
	cout << "Введите количество студентов (не более "
		<< MAX_STUDENT << ") ===> ";
	cin >> Group->N;
	for (int i = 0; i < Group->N; i++)
	{
		cout << "Введите информацию о " << (i + 1) << "-ом студенте\n";
		Group->Student[i] = InputStudent();
	}
}

// ============ Вывод информации о группе на экран =============
void OutputGroup(GROUP Group)
{
	cout << "Список группы " << Group.Name << "\n";
	for (int i = 0; i < Group.N; i++) OutputStudent(Group.Student[i]);
}

// ===================== конец программы ===
