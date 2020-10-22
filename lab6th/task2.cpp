#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>



using namespace std;


int main()
{
    int a[20], n, i, k = 0, s = 0, p=0;
    cout << "Massiv elements: ";
    cin >> n;
    cout <<"Massiv: " << endl;
    for(i = 0; i < n; i++) 
    {
        cout << "a[ " << i+1 << " ] = ";
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            k=i;
            break;
        }
    }
    for (i=n-1; i>=0; i--)
        if (a[i]==0)
        {
            p=i;
            break;
        }
    for (i=k; i<=p; i++)
    {
        s=s+a[i];
    }
    if (s==0){
      cout << "В массиве нет нулевых элементов";
    }
    else {
    cout << "Summa = " << s << endl;
    }
  
}

