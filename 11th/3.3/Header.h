using namespace std;

void Vvod(int str, int stlb, int** arr)
{
    for (int i = 0; i < str; i++) {
        arr[i] = new int[stlb];
    }
    //Ввод элементов
    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < stlb; j++)
        {
            arr[i][j] = rand() % 9 + 1;
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

}
void osnova(int str, int stol, int** arr, int p) {


    for (int i = 0; i < str - 2; ++i) {

        {
            for (int i = 0; i < str - 1; ++i) {


                int k = 0;
                int j;
                int sum = 0;
                for (j = 0; j < i + 1; j++)
                    sum += arr[j][i - j];

                k++;
                p *= arr[i][j];
                cout << "Сумма элементов параллельных выше побочной диагонали: " << k++ << " = " << sum << endl;
            }}
        int sum = 0;
        for (int i = 0; i < str; i++)
        {
            sum += arr[i][str - i - 1];
        }
        cout << "Сумма элементов побочной диагонали: " << " = " << sum << endl;

        int sum_1 = 0;

        for (int i = 0; i < str; ++i) {
            for (int j = 0; j < str; ++j) {
                if (i == j) {
                    sum_1 += arr[i][j];
                }
            }
        }

        cout << "Сумма элементов главной диагонали: " << " = " << sum_1 << endl;
        cout << endl;
    }
}
void del(int** arr, int str) {

    for (int i = 0; i < str; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}
