#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES

#include <algorithm>

#include "Header.h"

int main() {
	setlocale(LC_ALL, "Russian");
	int  i=0, s=0, key=0;
	const int n = 5;
	int* a = new int[100];

	FillArray(a, n, i);
	SortArray(a, n, i);
	PrintArray(a, n, i);
	SerchBinary(a, n, i, s, key);
	delete[] a;
	return 0;
}
