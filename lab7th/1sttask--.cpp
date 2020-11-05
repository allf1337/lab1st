#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <algorithm> // для std::swap. В C++11 используйте заголовок <utility>
 
using namespace std;


int main() {
 int a[100], n, i;
    cout << "Кол-во элементов массива (n<=100): ";
    cin >> n;
    cout <<"Массив: " << endl;
    for(i = 0; i < n; i++) 
    {
        cout << "a[ " << i+1 << " ] = ";
        cin >> a[i];
    }
// Перебираем каждый элемент массива (кроме последнего, он уже будет отсортирован к тому времени, когда мы до него доберемся)
	for (int startIndex = 0; startIndex < n - 1; ++startIndex)
	{
		// В переменной smallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации.
		// Начинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
		int smallestIndex = startIndex;
 
		// Затем ищем элемент поменьше в остальной части массива
		for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
		{
			// Если мы нашли элемент, который меньше нашего наименьшего элемента,
			if (a[currentIndex] < a[smallestIndex])
				// то запоминаем его
				smallestIndex = currentIndex;
		}
 
		// smallestIndex теперь наименьший элемент. 
                // Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
		std::swap(a[startIndex], a[smallestIndex]);
	}
 
	// Теперь, когда весь массив отсортирован - выводим его на экран
	cout << "Массив по убыванию: "<<endl;
  for (int index = n-1; index >=0; --index)
		{   
         
         cout << "a[ " << index+1 << " ] = ";
         cout<<a[index]<<endl;
 }
 
	return 0;
}
