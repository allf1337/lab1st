#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <algorithm>
 
using namespace std;



int Search_Binary (int arr[], int left, int right, int key)
{
 int midd = 0;
 while (1)
 {
 midd = (left + right) / 2;
 
 if (key < arr[midd])       // если искомое меньше значения в ячейке
 right = midd - 1;      // смещаем правую границу поиска
 else if (key > arr[midd])  // если искомое больше значения в ячейке
 left = midd + 1;    // смещаем левую границу поиска
 else                       // иначе (значения равны)
 return midd;           // функция возвращает индекс ячейки
 
 if (left > right)          // если границы сомкнулись 
 return -1;
 }
}
int main() {
 int a[100], n, i,s,key=0;
    cout << "Кол-во элементов массива (n<=100): ";
    cin >> n;
    cout <<"Массив: " << endl;
    for(i = 0; i < n; i++) 
    {
        cout << "a[ " << i+1 << " ] = ";
        cin >> a[i];
    }

	for (int startIndex = 0; startIndex < n - 1; ++startIndex)
	{
	
		int smallestIndex = startIndex;
 
		
		for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
		{
			
			if (a[currentIndex] < a[smallestIndex])
			
				smallestIndex = currentIndex;
		}
 
		
		std::swap(a[startIndex], a[smallestIndex]);
	}
 
	
	cout << "Массив по возрастанию: "<<endl;
  for (int index = 0; index < n; ++index)
		{   
         
         cout << "a[ " << index+1 << " ] = ";
         cout<<a[index]<<endl;
 }
 cout << "Массив по убыванию: "<<endl;
  for (int index = n-1; index >=0; --index)
		{   
         
         cout << "a[ " << index+1 << " ] = ";
         cout<<a[index]<<endl;
 }
 cout << "\n\nВведите любое число: ";
 cin >> key;
 
 s = Search_Binary (a, 0, n, key);
 
 if (s >= 0) 
 cout << "Указанное число находится в ячейке с индексом: " << s+1 << "\n\n";
 else
 cout << "В массиве нет такого числа!\n\n";
	return 0;
}




#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <algorithm>
 
using namespace std;



int Search_Binary (int arr[], int left, int right, int key)
{
 int midd = 0;
 while (1)
 {
 midd = (left + right) / 2;
 
 if (key < arr[midd])       // если искомое меньше значения в ячейке
 right = midd - 1;      // смещаем правую границу поиска
 else if (key > arr[midd])  // если искомое больше значения в ячейке
 left = midd + 1;    // смещаем левую границу поиска
 else                       // иначе (значения равны)
 return midd;           // функция возвращает индекс ячейки
 
 if (left > right)          // если границы сомкнулись 
 return -1;
 }
}
int main() {

int n, i,s,key=0;
int *a = new int [100];
    cout << "Кол-во элементов массива (n<=100): ";
    cin >> n;
    cout <<"Массив: " << endl;
    for(i = 0; i < n; i++) 
    {
        cout << "a[ " << i+1 << " ] = ";
        cin >> a[i];
    }

	for (int startIndex = 0; startIndex < n - 1; ++startIndex)
	{
	
		int smallestIndex = startIndex;
 
		
		for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
		{
			
			if (a[currentIndex] < a[smallestIndex])
			
				smallestIndex = currentIndex;
		}
 
		
		std::swap(a[startIndex], a[smallestIndex]);
	}
 
	
	cout << "Массив по возрастанию: "<<endl;
  for (int index = 0; index < n; ++index)
		{   
         
         cout << "a[ " << index+1 << " ] = ";
         cout<<a[index]<<endl;
 }
 cout << "Массив по убыванию: "<<endl;
  for (int index = n-1; index >=0; --index)
		{   
         
         cout << "a[ " << index+1 << " ] = ";
         cout<<a[index]<<endl;
 }
 cout << "\n\nВведите любое число: ";
 cin >> key;
 
 s = Search_Binary (a, 0, n, key);
 
 if (s >= 0) 
 cout << "Указанное число находится в ячейке с индексом: " << s+1 << "\n\n";
 else
 cout << "В массиве нет такого числа!\n\n";
	return 0;
}
