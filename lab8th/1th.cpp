#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <algorithm>
 
using namespace std;

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

void SezrchArray (int a[100], const int n, int i )
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


int main() {
 int  i,s;
 const int n = 5;
 int *a = new int [100];
   
  FillArray (a,n,i);
	SezrchArray (a,n,i );
  PrintArray (a,n,i);
 delete [] a;
	return 0;
}
