#include <iostream>
#include <string.h>
using namespace std;
 
int main()
{
    char stroka[] = "AB.CDEFG.HI";
    char *primer = strtok(stroka, ".");
    char *other = strtok(0, "");
    
    cout << other << endl;
}



#include <iostream>
#include <cstdlib>
int main(void){
    // переменная для общего колличество значений
    int n;

    // переменная для колличества значений==0
    int zero = 0;
    // переменная для суммы индексов со значениями==0
    int zeroindex = 0;

    // ввод пользователем колличества значений
    std::cout << "введите колличество значений:";
    std::cin >> n;

    // Выделение памяти, достаточной для массива из n int
    int* arr = (int*)std::malloc(n*sizeof(int));

    // ввод пользователем n значений
    for (int i = 0; i < n; i++ ){
        std::cout << "a[" << i << "]" << ":";
        std::cin >> arr[i];
        // если введен 0 то увеличиваем счетчик zero
        if( arr[i] == 0){
            zero++;
            zeroindex+=i;
        }
    }

    // выводим результаты расчетов
    
    std::cout << "сумма индексов:" << zeroindex;

    // освобождаем выделеную память перед выходом
    std::free(arr);
}
