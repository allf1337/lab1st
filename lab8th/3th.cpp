#include <iostream>

using namespace std;

void Vvod(int str, int stlb, int** arr)
{
for (int i = 0; i < str; i++) {
arr[i] = new int[stlb];
}
//Ввод элементов
 for(int i = 0;i < str; i++)
    {
        for(int j = 0;j < stlb;j++)
        {
            arr[i][j] = rand()%9+1;
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }

}
void osnova(int str, int stol, int** arr, int p){
  

for (int i = 0; i < str; ++i) {
for (int j = 0; j < stol; ++j) {
  p *= arr[i][j];
      
        int k;
        int sum = 0;
        for (j=0; j<i+1; j++) {
            sum += arr[j][i-j];
         k++;
        }
        cout<<"Сумма элементов параллельных выше побочной диагонали: "<<k<<" = "<<sum<<endl;
    }
    int sum = 0;
    for (int i=0; i<str; i++)
    {
            sum += arr[i][str-i-1];
    }
    cout<<"Сумма элементов побочной диагонали: "<<" = "<<sum<<endl;
    
    int sum_1=0;
    
    for(int i=0; i<str; ++i) {
        for(int j=0; j<str; ++j) {
            if (i==j) {
                sum_1+=arr[i][j];
            }
        }
    }
    
     cout<<"Сумма элементов главной диагонали: "<<" = "<<sum_1<<endl;
    cout<<endl;
}
}
void del(int** arr, int str) {

for (int i = 0; i < str; i++) {
delete[] arr[i];
}

delete[] arr;
}

int main()
{
setlocale(LC_ALL, "Russian");
int sum = 0, pr = 1;
int stroka, stolbik;
cout << "Введите кол-во строк" << endl;
cin >> stroka;
cout << "Введите кол-во столбиков" << endl;
cin >> stolbik;
int** Array = new int* [stroka];
Vvod(stroka, stolbik, Array);
osnova(stroka, stolbik, Array, pr);
del(Array, stroka);
return 0;
}
