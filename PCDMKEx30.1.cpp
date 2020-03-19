#include <iostream>
#include <cstring>
#include "cstdio"
using namespace std;
int main()
{
  char s[20];
  int len,i = 0,count = 0;
  gets(s);
  //len = strlen(s);
  while(s[i] != '\0')
  {
    count++;
    len = count;
    i++;
  }
  cout << "Length " <<len;
  return 0;
}
