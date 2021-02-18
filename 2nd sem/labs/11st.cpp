#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
	
	int n1, n2;
	char str[100];
	cin.getline(str, sizeof(str));
	
	
	string s(str);

	char str2[100];
	cin.getline(str2, sizeof(str2));

	
	string s2(str2);
	cin >> n1;
	cin >> n2;
	
	strncpy_s(str2, str, n1);
	
	
	cout << str << endl;
	//cout << s2;
	return 0;
}
