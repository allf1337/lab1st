#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <algorithm>
 
using namespace std;


int main() {
 int a[100], n, i,s;
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
 
	return 0;
}





#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <algorithm>
 
using namespace std;

int main() {
 int n, i,s;
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
 delete [] a;
	return 0;
}
