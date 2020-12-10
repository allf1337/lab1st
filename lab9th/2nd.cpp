#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;

bool polindrom(string word)
{
	int len = word.length();
	for(int i = 0; i < len/2; ++i)
	{
		if(word[i] != word[len-i-1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	setlocale(LC_ALL, "Russian");
  string str;
	cout << "Введите слово: ";
	cin >> str;
	if(polindrom(str))
	{
		cout << "Слово - полиндром.";
	}
	else
	{
		cout << "Слово - не полидром";
	}
	return 0;
}
