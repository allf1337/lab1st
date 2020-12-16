#include <iostream>
#include "Header.h"
using namespace std;


int main()

{
    setlocale(LC_ALL, "Russian");
    srand(time(0));
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    int** a = new int* [size];

    FillArray(size);
    delArray(a, size);

    return 0;
}
