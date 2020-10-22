#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>



using namespace std;


int main()
{
    int a[100], n, i, proizv=1;
    cout << "Кол-во элементов массива (n<=100): ";
    cin >> n;
    cout <<"Массив: " << endl;
    for(i=0; i < n; i++) 
    {
        cout << "a[ " << i+1 << " ] = ";
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        if(i%2!=0)
        {
            proizv*=a[i];
        }
    }
    
    cout << "Произведение = " << proizv << endl;

  
}
