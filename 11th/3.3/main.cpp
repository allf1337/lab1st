#include <iostream>
#include "Header.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    int sum = 0, pr = 1;
    int stroka, stolbik;
    cout << "Введите кол-во строк" << endl;
    cin >> stroka;
    cout << "Введите кол-во столбиков" << endl;
    cin >> stolbik;
    int** Array = new int* [stroka];
    Vvod(stroka, stolbik, Array);
    osnova(stroka, stolbik, Array, pr);
    del(Array, stroka);
    return 0;
}

