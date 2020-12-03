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

void FillArray (int a[100], const int n, int i )
{

//cout << "Кол-во элементов массива (n<=100): ";
    //cin >> n;
    cout <<"Массив: " << endl;
    for(i = 0; i < n; i++) 
    {
        cout << "a[ " << i+1 << " ] = ";
        cin >> a[i];
    }
}

void SortArray (int a[100], const int n, int i )
{

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
  
  
}

void PrintArray (int a[100], const int n, int i) {
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
}
void SerchBinary (int a[100], const int n, int i,int s, int key) {
   cout << "\n\nВведите любое число: ";
 cin >> key;
 
 s = Search_Binary (a, 0, n, key);
 
 if (s >= 0) 
 cout << "Указанное число находится в ячейке с индексом: " << s+1 << "\n\n";
 else
 cout << "В массиве нет такого числа!\n\n";
}

int main() {
 int  i,s,key;
 const int n = 5;
 int *a = new int [100];
   
  FillArray (a,n,i);
  SortArray (a,n,i );
  PrintArray (a,n,i);
  SerchBinary(a,n,i,s,key);
	delete [] a;
	return 0;
}
