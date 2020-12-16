#include <windows.h>
//#include "pch.h"
#include <iostream>
#include <locale.h>
#include "Header.h"
#include "Header_1.h"
#include <fstream>


using namespace std;






int main(int argc, char* argv[])

{
	setlocale(LC_ALL, "rus"); // корректное отображение Кириллицы

	char bus[100];
	cout << "adsd";
	cin.getline(bus, sizeof(bus));
	Persdepart persdepart;
	ifstream fin(bus);

	if (fin.is_open()) {
		InputPersDepart(fin, &persdepart);
		fin.close();

		OutputPersDepart(cout, persdepart);

		cout << "В какой";
		cin.getline(bus, sizeof(bus));
		ofstream fout(bus);
		if (fout.is_open()) {


			OutputPersDepart(fout, persdepart);
			fout.close();
			cout << "Данн в файле" << bus << endl;

		}
		else {

			cout << "Error" << bus << endl;

		}

	}
	else {
		cout << "File not found" << bus;
	}



	//Persdepart persdepart;


	//InputPersDepart(&persdepart);
	//OutputPersDepart(persdepart);

	//APersons(persdepart);
	system("pause");
	return 0;

}
