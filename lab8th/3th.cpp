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
