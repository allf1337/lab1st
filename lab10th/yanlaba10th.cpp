
#include <iostream>
using namespace std;

 
    struct Person{
 char LastName[15];     // Фамилия
char FirstName[15];    // Имя
char MiddleName[15];   // Отчество
         
 
char sex[10]; // пол
char specialty[10]; // специализация
int yearbirth; // год рождения
int workexp ;  // стаж работы
};
};

 
struct Persdepart {
             
  #include "stdafx.h"

#include <windows.h>
#include <iostream>
using namespace std;


struct Person {
	char LastName[15];     // Фамилия
	char FirstName[15];    // Имя
	char MiddleName[15];   // Отчество


	char sex[10]; // пол
	char specialty[10]; // специализация
	int yearbirth; // год рождения
	int workexp;  // стаж работы
};
 
struct Persdepart {

	int N;                 // Количество работников
	Person *persons;  // Массив персонала
};
// Ввод информации о работнике с клавиатуры
Person InputPerson(void);
// Вывод информации о работнике на экран
void OutputPerson(Person person);
// Ввод информации об отделе кадров с клавиатуры
void InputPersDepart(Persdepart *depart);
// Вывод информации об отделе кадров на экран
void OutputPersDepart(Persdepart depart);
// Сортировка персонала
void SortPersons(Persdepart bS);
// Вывод работников пенсионного возраста
void APersons(Persdepart bS);

int main()
{
	setlocale(LC_ALL, "Russian");
	setlocale(0, "");
	char *oldpers = new char[1024];
	Persdepart persdepart;


	InputPersDepart(&persdepart);
	OutputPersDepart(persdepart);
	 
	APersons(persdepart);
	system("pause");
	return 0;
}
// ============ Ввод информации о работнике с клавиатуры ========
Person InputPerson(void)
{
	Person person;
	cout << "Surname ====> ";
	cin >> person.LastName;

	cout << "Name ========> ";
	cin >> person.FirstName;

	cout << "Patronymic ===> ";
	cin >> person.MiddleName;

	cout << "Sex ===> ";
	cin >> person.sex;

	cout << "Cpecialization ===> ";
	cin >> person.specialty;

	cout << "Year of birth ===> ";
	cin >> person.yearbirth;

	cout << "Work expirience===> ";
	cin >> person.workexp;
	cout << "----------------------------------------------------------" << endl;
	return person;
}

// ============ Вывод информации о работнике на экран ===========
void OutputPerson(Person person)
{
	cout.width(8);
	cout.fill('0');

	cout << "Surname:" << person.LastName << ", "
		<< "Name:" << person.FirstName << ", "
		<< "Patronymic:" << person.MiddleName << ", "
		<< "Sex:" << person.sex << ". "
		<< "Cpecialization:" << person.specialty << ". "
		<< "Year of birth:" << person.yearbirth << ". "
		<< "Work expirience:" << person.workexp << ".\n ";
}


// ============ Ввод информации оо отделе кадров   с клавиатуры ==========
void InputPersDepart(Persdepart *depart)
{

	cout << "Enter number of workers: " << endl;
	cin >> depart->N;
	depart->persons = new Person[depart->N];

	for (int i = 0; i < depart->N; ++i)
		depart->persons[i] = InputPerson();
}

// ============ Вывод информации оо отделе кадров   с клавиатуры ==========
void OutputPersDepart(Persdepart depart)
{
	//cout << "Список работников пенсионного возраста: " << endl;
	SortPersons(depart);
	for (int i = 0; i < depart.N; ++i)
		OutputPerson(depart.persons[i]);
}

// Сортировка персонала
void SortPersons(Persdepart bS)
{
	for (int i = 1; i < bS.N; ++i)
	{
		for (int c = i; c > 0; --c)
		{
			if (bS.persons[c].workexp > bS.persons[c - 1].workexp)
				swap(bS.persons[c], bS.persons[c - 1]);
		}
	}
}


// Вывод работников пенсионного возраста
void APersons(Persdepart bS)
{
	cout << "Old staff list : " << endl;
	for (int i = 0; i < bS.N; ++i)
	{
		if (bS.persons[i].yearbirth <= 1955) {
			cout << bS.persons[i].LastName <<"  " ;
			cout << bS.persons[i].FirstName << "  ";
			cout << bS.persons[i].MiddleName << "  ;"<<endl;
			 
		}
		 
	}

}
