#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
  int a =0 ,b = 0,c = 0;
  char str[20] ="21/9/2013";
  char fact[] = " / ";
  char *token = strtok(str,fact);

  while(token != NULL)
  {
    if(a == 0)
    {
      a = stoi(token);
    }
    else if (b == 0)
    {
      b = stoi(token);
    }
    else
      c = stoi(token);
    token = strtok(NULL, fact);
  }
  cout << "Day \t" << "Month \t" <<"Year \n";
  cout << a << '\t' << b<<'\t' << c << '\n';
  return 0;
}
