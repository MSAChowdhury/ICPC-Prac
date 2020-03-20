#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
  char s[20];
  int len,i = 0,count = 0,k = 0,small,capital;
  gets(s);
  while(s[i] != '\0')
  {
    if (s[i] > 'a' && s[i] < 'z')
    {
      count++;
      small = count;
      i++;
    }
    else
    {
      k++;
      capital = k;
      i++;
    }
  }
  cout << "Small Letter = " <<small << '\n' << "Capital Letter = " <<capital;
  return 0;
}
