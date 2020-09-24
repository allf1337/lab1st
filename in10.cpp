#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Число ";
    cin >> a;
    b=a*a; //2
    a=b*b; //4
    a=a*a; //8
    a=a*b; //10
    cout << a;
    return 0;
}
