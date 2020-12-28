#pragma once
#include <math.h>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

template <class T>
class  my_class {
    double n, m, i, j;//, * arr;
    T** arr;
public:

    my_class() {

        arr = new double* [n];
        for (int i = 0; i < 1; i++)
        {
            arr[i] = new double[m];
        };
    }

    my_class(double n_size, double m_size)
    {
        n = n_size; m = m_size;
        arr = new double* [n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = new double[m];
        };
    }
    ~my_class() {
        for (int i = 0; i < n; i++) delete arr[i];
        delete[]arr;
    }
    void C() {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
    }
    void show()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                std::cout << arr[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    T getMin() {


        // int** min = new int* [0];
         //int min = pp[0][0];
        T min = arr[0][0];

        //int min = arr[0][0];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] < min)
                {
                    min = arr[i][j];
                }
            }
        }


        return min;
    }

    T getMax() {
        T max = arr[0][0];

        //T min = arr[0];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] > max)
                {
                    max = arr[i][j];
                }
            }
        }




        /*	T min = arr[0];

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (min > arr[i * m + j]) {
                        min = arr[i * m + j];
                    }
                }
            }*/




            //for (int i = 0; i < n; i++) {
            //	for (int j = 0; j < m; j++) {
            //		if (max < arr[i * m + j]) {
            //			max = arr[i * m + j];
            //		}
            //	}
            //}

        return max;
    }

    T getAverage() {
        T sum = 0;
        T pr = n * m;


        //for (int i = 0; i < n; i++)
        //{
        //	for (int j = 0; j < m; j++)
        //		//scanf("%d", &pp[i][j]);
        //}

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                sum += arr[i][j];
        }

        return (sum / pr);

        /*for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sumOfElements += pp[i * m + j];
            }
        }

        return sumOfElements / amountOfElements;*/
    }
};

template <class T>
ostream& operator<<(ostream& stream, my_class<T>& arr) {
    stream << "Min: " << arr.getMin() << "\n"
        << "Max: " << arr.getMax() << "\n"
        << "Sred_arif: " << arr.getAverage() << "\n";
    return stream;
}



