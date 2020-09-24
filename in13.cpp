#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    cout<<"Число ";
    cin >> a;
    b=a*a; //2
    c=b*b; //4-я
    d=c*c; //8-я
    c=d*b; //12
    a=a*c; //13
    cout << a;
    return 0;
}