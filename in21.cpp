#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout << "Число ";
    cin >> a;
    b=a*a; //2
    c=b*b; //4 
    d=c*c; //8
    e=d*d; //16
    b=e*c; //20
    a=b*a; //21
    cout << a;
    return 0;
}