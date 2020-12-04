#include <iostream>
#include <iomanip>

using namespace std;

const unsigned int DIM1 = 4;
const unsigned int DIM2 = 4;

int ary[DIM1][DIM2];

int main() {

    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            ary[i][j] = (i + 1) * 10 + (j + 1);
        }
    }
     for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            cout << setw(4) << ary[i][j];
        }
        cout << endl;
    }

    return 0;
}





#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int n,i,j;
    int sum,k=0,min=0,sum1;
    setlocale(LC_ALL, "Russian");
    cout<<"Введите размер массива: ";
    cin>>n;
    int Matrix[n][n];
    for(i = 0;i < n; i++)
    {
        for(int j = 0;j < n;j++)
        {
            Matrix[i][j] = rand()%9+1;
            cout<<Matrix[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for (i=0; i<n-1; i++)
    {
        sum = 0;
        for (j=0; j<i+1; j++)
            sum += Matrix[j][i-j];
        k++;
        cout<<"Сумма элементов параллельных выше побочной диагонали: "<<k<<" = "<<sum<<endl;
    }
    sum = 0;
    for (i=0; i<n; i++)
    {
            sum += Matrix[i][n-i-1];
    }
    cout<<"Сумма элементов побочной диагонали: "<<" = "<<sum<<endl;
    
    int sum_1=0;
    
    for(i=0; i<n; ++i) {
        for(j=0; j<n; ++j) {
            if (i==j) {
                sum_1+=Matrix[i][j];
            }
        }
    }
    
     cout<<"Сумма элементов главной диагонали: "<<" = "<<sum_1<<endl;
    cout<<endl;

     

    
      
    system("pause");
    return 0;
}


// что такое побочная диагональ - это диагональ, которая идет сверху-права на низ-лево. Нужная "диагональ ниже" - это просто плюс единица по высоте. Но есть одна проблема - у не квадратной матрицы нужно точно определить, что называть диагональю.

//Итак, если бы это была квадратная матрица размером size x size, и нумерация с нуля, то побочная диагональ это (схематически)


s=0;
for (int i = 1; i <= size; i++) { // Итак, если бы это была квадратная матрица размером size x size, и нумерация с нуля, то побочная диагональ это (схематически)
  s+=m[size-i][i-1]
}






s=0;
for (int i = 1; i <= size-1; i++) { // А с диагональню ниже, будет так (заметье, что размер этой диагонали на 1 меньше)
  s+=m[size-i][i]
}
