1)
#include <iostream>
#include <cstring>
 
int main()
{
  int *del;
  del=new int;
  char str[100];
  strcpy( str, "Эти " );              
  strcat( str, "строки "          );
  strcat( str, "объединены "    );
  strcat( str, "операцией "      );
  strcat( str, "конкатенации." );
 
  std::cout << str << std::endl;
  delete del;
  return 0;
}
  
  
  
  2)
#include <iostream>
#include <cstring>
#include <clocale>
using namespace std;

bool polindrom(string word)
{
  int *del;
  del=new int;
	int len = word.length();
	for(int i = 0; i < len/2; ++i)
	{
		if(word[i] != word[len-i-1])
		{
			return false;
		}
	}
	return true;
  delete del;
}

int main()
{
	setlocale(LC_ALL, "Russian");
  int *del;
  del=new int;
  string word;
	cout << "Введите слово: ";
	cin >> word;
	if(polindrom(word))
	{
		cout << "Слово - полиндром.";
	}
	else
	{
		cout << "Слово - не полидром";
	}
  delete del;
	return 0;
}
