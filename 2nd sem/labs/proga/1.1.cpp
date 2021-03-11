#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N1, N2;
    cout << "N1: "; cin >> N1;
    cout << "N2: "; cin >> N2;

    cin.ignore();
    string S1, S2, S3;
    cout << "S1: ";
    getline(cin, S1);
    cout << "S2: ";
    getline(cin, S2);

    S3 = S1.substr(0, N1) + S2.substr(S2.size() - N2);

    cout << S3 << "\n";

    system("pause");
    return 0;
}
