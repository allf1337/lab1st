#include "Header.h"
#include "Header_1.h"
#include <iostream>

using namespace std;

Person InputPerson(istream &in)
{
	Person person;
	//cout << "State Number ====> ";
	in >> person.NumberState;

	//cout << "Model ========> ";
	in >> person.Model;

	//cout << "NumberStay ===> ";
	in >> person.NumberStay;



	//cout << "NumberSit ===> ";
	in >> person.NumberSit;

	//cout << "Year ===> ";
	in >> person.year;


	person.NumberAll = person.NumberSit + person.NumberStay;

	//out << "----------------------------------------------------------" << endl;
	return person;
}


void OutputPerson(ostream &out,Person person)
{
	out.width(8);
	out.fill('0');

	out << "NumberState:" << person.NumberState << ", ";
	out << "Model:" << person.Model << ", ";
	out << "NumberStay:" << person.NumberStay << ", ";

	out << "NumberSit:" << person.NumberSit << ". ";
	out << "Year:" << person.year << ". ";
	out << "NumberAll:" << person.NumberAll << ".\n ";
}



void InputPersDepart(istream &in,Persdepart* depart)
{

	//cout << "Enter number of bus: " << endl;
	in >> depart->N;
	depart->persons = new Person[depart->N];

	for (int i = 0; i < depart->N; ++i)
		depart->persons[i] = InputPerson(in);
}


void OutputPersDepart(ostream &out,Persdepart depart)
{

	//SortPersons(depart);
	for (int i = 0; i < depart.N; ++i)
		OutputPerson(out,depart.persons[i]);
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



void APersons(Persdepart bS)
{
	int G;
	cout << "NumberAll : " << endl;
	cin >> G;
	for (int i = 0; i < bS.N; ++i)
	{
		if (bS.persons[i].NumberAll >= G) {
			cout << "NumberState: " << bS.persons[i].NumberState << " , ";
			cout << " Model: " << bS.persons[i].Model << " , ";
			cout << " Year: " << bS.persons[i].year << " , ";
			cout << "NumberAll: " << bS.persons[i].NumberAll << " . " << endl;





		}

	}

}*/
