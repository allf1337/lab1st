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
struct BUS {
	int Number;     // Номер автобуса
	int Year;          // Год выпуска
	char Model[15];    // Модель автобуса
	int NumberStay;   // Мест стоя
	int NumberSit;            // Месть сидя
};

// ------- описание структурного типа данных ГРУППА ------------
// максимальное количество студентов в группе
#define MAX_BUS 30
struct GROUP {
	char Name[5];          // Название группы
	int N;                 // Количество автобусов
	BUS Bus[MAX_BUS];  // Массив студентов
};

// =============== описание прототипов функций =================

// Ввод информации о студенте с клавиатуры
BUS InputBus(void);

// Вывод информации о студенте на экран
void OutputBus(BUS Bus);

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
BUS InputBus(void)
{
	BUS bus;
	cout << "Введите гос. номер автобуса ====> ";
	cin >> bus.Number;
	cout << "Введите модель автобуса ========> " ;
	cin >> bus.Model;
	cout << "Введите год выпуска автобуса ===> ";
	cin >> bus.Year;
	cout << "Введите кол-во мест стоя ===> ";
	cin >> bus.NumberStay;
	cout << "Введите кол-во мест сидя ===> ";
	cin >> bus.NumberSit;
	return bus;
}

// ============ Вывод информации о студенте на экран ===========
void OutputBus(BUS Bus)
{
	cout.width(8);
	cout.fill('.');
	cout << Bus.Number << " "
		<< Bus.Model << " "
		<< Bus.Year << ". "
		<< Bus.NumberStay << ". "
		<< Bus.NumberSit << ".\n";
}

// ============ Ввод информации о группе с клавиатуры ==========
void InputGroup(GROUP *Group)
{
	cout << "Введите название группы ===> ";
	cin >> Group->Name;
	cout << "Введите количество автобусов (не более "
		<< MAX_BUS << ") ===> ";
	cin >> Group->N;
	for (int i = 0; i < Group->N; i++)
	{
		cout << "Введите информацию о " << (i + 1) << "-ом автобусе\n";
		Group->Bus[i] = InputBus();
	}
}

// ============ Вывод информации о группе на экран =============
void OutputGroup(GROUP Group)
{
	setlocale(LC_ALL, "Russian");

	cout << "Список автобусов " << Group.Name << "\n";
	for (int i = 0; i < Group.N; i++) OutputBus(Group.Bus[i]);


	
}
// ===================== конец программы ===
