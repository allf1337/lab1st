

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







