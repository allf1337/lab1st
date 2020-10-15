#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>



using namespace std;


int main() {
  int  i, k = 0, s = 0, p = 0;
  int const n=10;
  double S[n], proizv=1;
  cout << "Введите элементы массива: " << endl;
  for (int i=0; i<n; i++)
  {
    cin>>S[i];
  }
  for (i=0; i<n; i++) {
    if (S[i]==0)
    {
      k=1;
      break;
    }
    for (i=n; i<n; i--)
    if (S[i]==0)
    {
      p=i;
    }
    for (i=k; i<p; i++)
    {
      s+=S[i]+s;
    cout << "Sum: " << s << endl;
    }
  
    
}

}


