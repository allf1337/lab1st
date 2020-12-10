#include <iostream>
using namespace std;
 
void FillArray(int size){
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

}
void delArray(int** a, int size ){
  for(int i=0; i<size;i++) {
        delete [] a[i];
    }
    delete [] a;
}
int main()

{   
    srand(time(0));
    int size;
    cout << "Введите размер массива: ";
    cin>>size;
    int** a=new int*[size];
    
    FillArray(size);
    delArray (a,size);
   
    return 0;
}
