#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>



using namespace std;


int main()
{
    int a[100], n, i, k = 0, s = 0, p=0;
    cout << "Кол-во элементов массива (n<=100): ";
    cin >> n;
    int *mass = new int[n];       
 
 for (int i = 0; i < n; i++)    
  {
        cout << "a[ " << i+1 << " ] = ";
        cin >> mass[i];
    }
 
 for (int i = 0; i < n; i++)  
 {
  if (mass[i] < 0)
  {
                mass[i] = 0;
 
  }
   }
 cout << "Массив без n<0 " << endl;
 for (int i = 0; i < n; i++)
{   
        
         cout<<i+1<<" : ";
         cout<<mass[i]<<endl;
 }
 delete[] mass;         
system("pause");
        return 0;
}
