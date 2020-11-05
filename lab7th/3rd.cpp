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
    int sum,k=0,min=0;
    setlocale(LC_ALL, "Russian");
    cout<<"Vvedite razmer matricy: 0<n<100=";
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
        cout<<"Summa elementov parallelnyh vyshe pobo4noi diagonali:"<<k<<" = "<<sum<<endl;
    }
    sum = 0;
    for (i=0; i<n; i++)
    {
            sum += Matrix[i][n-i-1];
    }
    cout<<"Summa elementov pobo4noi:"<<" = "<<sum<<endl;
    cout<<endl;
    system("pause");
    return 0;
}
