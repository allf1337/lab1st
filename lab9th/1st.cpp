#include <iostream>
#include <cstring>
 
int main()
{
  char str[100];
  strcpy( str, "Эти " );              
  strcat( str, "строки "          );
  strcat( str, "объединены "    );
  strcat( str, "операцией "      );
  strcat( str, "конкатенации." );
 
  std::cout << str << std::endl;
  return 0;
}
