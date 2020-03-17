#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
  char ch[50];
  gets(ch);
  char delim [] = " ";
  char *token = strtok(ch,delim);
  while (token)
  {
    cout << token<<endl;
    token = strtok(NULL,delim);
  }
  return 0;
}
