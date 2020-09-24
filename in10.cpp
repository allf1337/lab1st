#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Число ";
    cin >> a;
    b=a*a; //2-я степень
    a=b*b; //4-я
    a=a*a; //8-я
    a=a*b; //10
    cout << a;
    return 0;
}
