#include <string>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int count_s1, count_s2, n1, n2, aints;
    char s1[100]; 
    char s2[100];
    char s3[100];
    cout << "Введите s1: ";
    cin.getline(s1, sizeof(s1));
    count_s1 = strlen(s1);
    cout << "Введите s2: ";
    cin.getline(s2, sizeof(s2));
    count_s2 = strlen(s2);
    cout << "Введите n1: ";
    cin >> n1;
    //cout << count_s1;
    string s(s3);
  
    cout << "Введите n2: ";
    cin >> n2;
    //cout << count_s1;

    //string s1; 
    cout << s.append(s1, 1, n1);
   
    //cout << aints;
   

    return 0;
}

