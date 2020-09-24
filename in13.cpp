#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"Число ";
    cin >> a;
    b=a*a; //2
    c=b*b; //4
    d=c*c; //8
    c=d*c; //12
    a=a*c; //13
    cout << a;
    return 0;
}
