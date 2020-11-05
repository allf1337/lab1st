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
