#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"Число ";
    cin >> a;
    b=a*a; //2
    c=b*a; //3
    d=c*c; //6
    e=d*d; //12
    a=c*e; //15
    cout << a;
    return 0;
}