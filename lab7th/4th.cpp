#include <stdio.h>
#include <math.h>
 
//-----------------------------------------------------------------------------
int* Rotate(const int* source, int* result, const size_t n)
{
    size_t i, j;
 
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            result[i * n + j] = source[j * n + (n - i - 1)];
        }
    }
 
    return result;
}
//-----------------------------------------------------------------------------
void Print(const int* array, const size_t n)
{
    size_t i, j;
 
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("%d ", array[i * n + j]);
        }
 
        printf("\n");
    }
    printf("\n");
}
//-----------------------------------------------------------------------------
 
int main()
{
    int source[] = {11, 12, 13, 14, 15,
                    21, 22, 23, 24, 25,
                    31, 32, 33, 34, 35,
                    41, 42, 43, 44, 45,
                    51, 52, 53, 54, 55};
    size_t len = sizeof(source) / sizeof(*source);
    int result[len];
    size_t n = sqrt(len);
 
    Print(source, n);
 
    Rotate(source, result, n);
 
    Print(result, n);
 
    return 0;
}










#include <iostream>
using namespace std;
 
int main()
{
    int size;
    cin>>size;
    int** a=new int*[size];
    for(int i=0; i<size;i++) {
        a[i]=new int[size];
    }
    int** b=new int*[size];
    for(int i=0; i<size;i++) {
        b[i]=new int[size];
    }
    for (int i=0;i<size;i++){
        cout<<endl;
        for (int j=0;j<size;j++){
            a[i][j] = rand()%9+1;
            cout<<a[i][j]<<" ";
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            b[i][size-1-j] = a[j][i];
        }
    }
    cout<<endl<<"++++++++";
    for(int i=0;i<size;i++){
        cout<<endl;
        for(int j=0;j<size;j++)
                cout<<b[i][j]<<" ";
    }
    for(int i=0; i<size;i++) {
        delete [] a[i];
    }
    delete [] a;
    for(int i=0; i<size;i++) {
        delete [] b[i];
    }
    delete [] b;
    return 0;
}






#include <iostream>
using namespace std;
 
int main()

{
    int size;
    cout << "Введите размер массива: ";
    cin>>size;
    int** a=new int*[size];
    for(int i=0; i<size;i++) {
        a[i]=new int[size];
    }
    int** b=new int*[size];
    for(int i=0; i<size;i++) {
        b[i]=new int[size];
    }
    for (int i=0;i<size;i++){
        cout<<endl;
        for (int j=0;j<size;j++){
            a[i][j] = 10 + rand()%89;
            cout<<a[i][j]<<" ";
        }
    }
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            b[i][size-1-j] = a[j][i];
        }
    }
    cout<<endl<<endl<<"Массив повернутый по часовой стрелке: "<<endl;
    for(int i=0;i<size;i++){
        cout<<endl;
        for(int j=0;j<size;j++)
                cout<<b[i][j]<<" ";
    }
    for(int i=0; i<size;i++) {
        delete [] a[i];
    }
    delete [] a;
    for(int i=0; i<size;i++) {
        delete [] b[i];
    }
    delete [] b;
    return 0;
}




#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void FillArray(int a[100], int size  ) {

  srand(time(0)); // постоянно рандомные значения массива
    {
    int size;
    cin>>size;
    int** a=new int*[size];
    for(int i=0; i<size;i++) {
        a[i]=new int[size];
    }
    int** b=new int*[size];
    for(int i=0; i<size;i++) {
        b[i]=new int[size];
    }
    for (int i=0;i<size;i++){
        cout<<endl;
        for (int j=0;j<size;j++){
            a[i][j] =  rand()%9+1;
            cout<<a[i][j]<<" ";
            delete [] a[i];
        }
    }
  
  for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            b[i][size-1-j] = a[j][i];
        }
    }
    cout<<endl<<endl<<"Массив повернутый по часовой стрелке: "<<endl;
    for(int i=0;i<size;i++){
        cout<<endl;
        for(int j=0;j<size;j++)
                cout<<b[i][j]<<" ";
    }
    for(int i=0; i<size;i++) {
        delete [] a[i];
    }
    
    for(int i=0; i<size;i++) {
        delete [] b[i];
    }  
   
    }

}

int main() {

FillArray(b,size);


}
