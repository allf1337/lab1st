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
