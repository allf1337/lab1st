#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>



using namespace std;


int main() {
  int const n=10;
  double S[n], proizv=1;
  cout << "Введите элементы массива: " << endl;
  for (int i=0; i<n; i++)
  {
    cin>>S[i];
  }
  for (int i=0; i<n; i++)
  {
    if (i%2==0)
    {
      proizv*=S[i];
    }
    
  }
cout << "Proizv: " << proizv << endl;

}

