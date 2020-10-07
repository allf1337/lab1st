I
#1 1,2,3...
--------------------------------------------------------------------------------------------

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double proizv = 1, x, i, sum = 0;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}

	for (i = 1; i <= x; i++) {
		sum = sum + i;
		proizv = proizv * i;
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

---------------------------------------------------------------------------------------------------------

#2 2,4,6...


#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double proizv = 1, x, i, sum = 0;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}


	for (i = 1; i <= x; i++) {
		sum = sum + i * 2;
		proizv = proizv * 2 * i;
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

----------------------------------------------------------------------------------------------------------

#3 1,3,5...

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double proizv=1, number, x, i, sum = 0;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}

	for (i = 1; i <= x; i++) {
		sum = sum + (2 * i - 1);
		proizv = proizv * (2 * i - 1);
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

---------------------------------------------------------------------------------------------------------------
#4 2,4,8...

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double number, proizv = 1, x, i, sum = 0;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}

	for (i = 1; i <= x; i++) {
		sum = sum + pow(2, i);
		proizv = proizv * pow(2, i);
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

--------------------------------------------------------------------------------------------------------------

#5 1/1,1/2,1/3,1/4...


#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double number, x, i, sum = 0, proizv = 1;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}

	for (i = 1; i <= x; i++) {
		number = 1. / i;
		sum = sum + number;
		proizv = proizv * number;
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

-----------------------------------------------------------------------------------------------------------------

#6 1/2,1/4,1/6,1/8...


#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double number, x, i, sum = 0, proizv = 1;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}

	for (i = 1; i <= x; i++) {
		number = 1. / (2 * i);
		sum = sum + number;
		proizv = proizv * number;
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

-----------------------------------------------------------------------------------------------------

#7 1/1,1/3,1/5,1/7...


#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double number, x, i, sum = 0, proizv = 1;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}

	for (i = 1; i <= x; i++) {
		number = 1. / (2 * i - 1);
		sum = sum + number;
		proizv = proizv * number;
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

-----------------------------------------------------------------------------------------------------------

#8 1/2,1/4,1/8,1/16...


#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double number, x, i, sum = 0, proizv = 1;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}

	for (i = 1; i <= x; i++) {
		number = 1. / pow(2,i);
		sum = sum + number;
		proizv = proizv * number;
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

-----------------------------------------------------------------------------------------

#9 1/1,-1/2,1/3,-1/4...

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	double number, x, sum = 0, proizv = 1,odin;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}


	for (i = 1; i <= x; i++) {
		number = 1. / i;
		if (i % 2 == 0) {
			number = number * (-1);
		}
		sum = sum + number;
		proizv = proizv * number;
	}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	system("pause");
	return(0);
}

---------------------------------------------------------------------------------------------------

#10 1/1,1/2,1/6,1/24,1/120...

#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, F=1, x;
	double sum = 0, proizv = 1,a;
	cout << "Кол-во элементов: " << endl;
	cin >> x;
	//Ошибки
	if (x < 0) {
		cout << "Введено неверное значение х" << endl;
		system("pause");
		return(0);
	}

	
		for (i = 1; i <= x; i++) {
			F *= i;
			a = 1. / F;
			sum = sum + a;
			proizv = proizv * a;

		}
	cout << "Сумма: " << sum << endl;
	cout << "Произведение: " << proizv << endl;
	
	system("pause");
	return(0);
}

----------------------------------------------------------------------------------------------------

II

----------------------------------------------------------------------------------------------------

#3


#include <iostream>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>



using namespace std;

long double fact(int i)
{
    if(i < 0) 
        return 0;
    if (i == 0)
        return 1;
    else
        return i * fact(i - 1);
}
int main() {
	setlocale(LC_ALL, "Russian");
	//Ввод аргументов
	double x, i, left, right, c, sum = 0;

	cout << "Введите х: " << endl;
	cin >> x;
	cout << "Введите количество: " << endl;
	cin >> c;
	//Ошибки

	if (x < 0) {
		cout << "Введено неверное значение x " << endl;
		system("pause");
		return(0);
	}
	if (c < 0) {
		cout << "Введено неверное значение кол-ва " << endl;
		system("pause");
		return(0);
	}
	//Найдём левую часть

	left = cos(x);

	//Найдём правую часть

	
	for (i = 1; i <= c; i++) {

		right = pow(-1,i) * pow(x, 2*i) / fact(2*i);

		sum = sum + right;

	}
	//Сравнение и вывод
	if  ( (sum-left)<=1 && (sum-left)>=(-1)) {
		cout << "Приблизительно равны" << endl;

	}
	else {
		cout << "Не равны" << endl;

	}
	cout << "Right side: "<<sum << endl;
	cout << "Left side: "<<left << endl;
	system("pause");
	return(0);

}


-------------------------------------------------------------------------------------




