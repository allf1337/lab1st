//#include <windows.h>
//#include "pch.h"
#include <iostream>
#include <locale.h>
#include "Header.h"

using namespace std;



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


