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


void OutputPersDepart(Persdepart depart)
{
	
	SortPersons(depart);
	for (int i = 0; i < depart.N; ++i)
		OutputPerson(depart.persons[i]);
}


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



void APersons(Persdepart bS)
{
	int G;
  cout << "NumberAll : " << endl;
  cin >> G;
	for (int i = 0; i < bS.N; ++i)
	{
		if (bS.persons[i].NumberAll >= G) {
			cout << "NumberState: "<< bS.persons[i].NumberState<<" , " ;
			cout << " Model: "<< bS.persons[i].Model <<" , " ;
			cout << " Year: "<<bS.persons[i].year<<" , " ;
      cout << "NumberAll: " <<bS.persons[i].NumberAll<<" . " << endl;





		}

	}

}
