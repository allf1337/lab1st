

#include <windows.h>
#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;


struct BUS {
	int Number;    
	int Year;         
	char Model[15];    
	int NumberStay;  
	int NumberSit;            
};


#define MAX_BUS 30
struct GROUP {
	char Name[5];          
	int N;                 
	BUS Bus[MAX_BUS];  
};



BUS InputBus(void);

void OutputBus(BUS Bus);


void InputGroup(GROUP *Group);


void OutputGroup(GROUP Group);



int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	
	GROUP Group;
	InputGroup(&Group);
	OutputGroup(Group);

	
	return 0;
}


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

void OutputGroup(GROUP Group)
{
	setlocale(LC_ALL, "Russian");

	cout << "Список автобусов " << Group.Name << "\n";
	for (int i = 0; i < Group.N; i++) OutputBus(Group.Bus[i]);


	


	
}








#include <windows.h>
#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;


struct BUS {
	int Number;    
	int Year;         
	char Model[15];    
	int NumberStay;  
	int NumberSit;
	int Place;
};


#define MAX_BUS 30
struct GROUP {
	char Name[5];          
	int N;                 
	BUS Bus[MAX_BUS];  
};



BUS InputBus(void);

void OutputBus(BUS Bus);


void InputGroup(GROUP *Group);


void OutputGroup(GROUP Group);



int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	
	GROUP Group;
	InputGroup(&Group);
	OutputGroup(Group);

	
	return 0;
}


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
    cout << "Введите нужную вместимость автобуса";
	cin >> bus.Place;
	return bus;
}


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

void OutputGroup(GROUP Group)
{
	setlocale(LC_ALL, "Russian");

	cout << "Список автобусов " << Group.Name << "\n";
	for (int i = 0; i < Group.N; i++) OutputBus(Group.Bus[i]);


	

	
	
}









//#include <windows.h>
//#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;


struct Person {
	int NumberState;     // Фамилия
	char Model[15];    // Имя
	int NumberStay;   // Отчество


	char sex[10]; // пол
	int NumberSit; // специализация
	int year; // год рождения
	int NumberAll;  // стаж работы
  //int G;
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
	
	//char *oldpers = new char[1024];
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
	cout << "State Number ====> ";
	cin >> person.NumberState;

	cout << "Model ========> ";
	cin >> person.Model;

	cout << "NumberStay ===> ";
	cin >> person.NumberStay;

	//cout << "Sex ===> ";
//	cin >> person.sex;

	cout << "NumberSit ===> ";
	cin >> person.NumberSit;

	cout << "Year ===> ";
	cin >> person.year;

	//cout << "Work expirience===> ";
	person.NumberAll = person.NumberSit + person.NumberStay;

	cout << "----------------------------------------------------------" << endl;
	return person;
}

// ============ Вывод информации о работнике на экран ===========
void OutputPerson(Person person)
{
	cout.width(8);
	cout.fill('0');

	cout << "NumberState:" << person.NumberState << ", "
		<< "Model:" << person.Model << ", "
		<< "NumberStay:" << person.NumberStay << ", "
		//<< "Sex:" << person.sex << ". "
		<< "NumberSit:" << person.NumberSit << ". "
		<< "Year:" << person.year << ". "
		<< "NumberAll:" << person.NumberAll << ".\n ";
}


// ============ Ввод информации оо отделе кадров   с клавиатуры ==========
void InputPersDepart(Persdepart *depart)
{

	cout << "Enter number of bus: " << endl;
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
			if (bS.persons[c].year > bS.persons[c - 1].year)
				swap(bS.persons[c], bS.persons[c - 1]);
		}
	}
}


// Вывод работников пенсионного возраста
void APersons(Persdepart bS)
{
	int G;
  cout << "NumberAll : " << endl;
  cin >> G;
	for (int i = 0; i < bS.N; ++i)
	{
		if (bS.persons[i].NumberAll >= G) {
			cout << "NumberState: "<< bS.persons[i].NumberState ;
			cout << " Model: "<< bS.persons[i].Model ;
			cout << " Year: "<<bS.persons[i].year << endl;





		}

	}

}





//#include <windows.h>
//#include "pch.h"
#include <iostream>
#include <locale.h>

using namespace std;


struct Person {
	int NumberState;     
	char Model[15];  
	int NumberStay;   


	
	int NumberSit; 
	int year; 
	int NumberAll;  
 
};

struct Persdepart {

	int N;                 
	Person *persons;  
};

Person InputPerson(void);

void OutputPerson(Person person);

void InputPersDepart(Persdepart *depart);

void OutputPersDepart(Persdepart depart);

void SortPersons(Persdepart bS);

void APersons(Persdepart bS);

int main()
{
	setlocale(LC_ALL, "Russian");
	
	
	Persdepart persdepart;


	InputPersDepart(&persdepart);
	OutputPersDepart(persdepart);

	APersons(persdepart);
	system("pause");
	return 0;
}

Person InputPerson(void)
{
	Person person;
	cout << "State Number ====> ";
	cin >> person.NumberState;

	cout << "Model ========> ";
	cin >> person.Model;

	cout << "NumberStay ===> ";
	cin >> person.NumberStay;

	

	cout << "NumberSit ===> ";
	cin >> person.NumberSit;

	cout << "Year ===> ";
	cin >> person.year;

	
	person.NumberAll = person.NumberSit + person.NumberStay;

	cout << "----------------------------------------------------------" << endl;
	return person;
}


void OutputPerson(Person person)
{
	cout.width(8);
	cout.fill('0');

	cout << "NumberState:" << person.NumberState << ", "
		<< "Model:" << person.Model << ", "
		<< "NumberStay:" << person.NumberStay << ", "
		//<< "Sex:" << person.sex << ". "
		<< "NumberSit:" << person.NumberSit << ". "
		<< "Year:" << person.year << ". "
		<< "NumberAll:" << person.NumberAll << ".\n ";
}



void InputPersDepart(Persdepart *depart)
{

	cout << "Enter number of bus: " << endl;
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
			if (bS.persons[c].year > bS.persons[c - 1].year)
				swap(bS.persons[c], bS.persons[c - 1]);
		}
	}
}


// Вывод работников пенсионного возраста
void APersons(Persdepart bS)
{
	int G;
  cout << "NumberAll : " << endl;
  cin >> G;
	for (int i = 0; i < bS.N; ++i)
	{
		if (bS.persons[i].NumberAll >= G) {
			cout << "NumberState: "<< bS.persons[i].NumberState ;
			cout << " Model: "<< bS.persons[i].Model ;
			cout << " Year: "<<bS.persons[i].year << endl;





		}

	}

}



