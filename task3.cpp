#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int x,y;
	cout << "Введите число: ";
	cin >> x;
	cout << "Введите степень в которую хотите возвести число: ";
	cin >> y;
	cout << pow(x, y);
	

	return 0;
}
