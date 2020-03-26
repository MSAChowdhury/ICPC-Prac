#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
  char ch[50];
  gets(ch);
  int count = 0;
  char delim [] = " ";
  char *token = strtok(ch,delim);
  while (token)
  {
    cout << token<<endl;
    count++;
    token = strtok(NULL,delim);
  }
  cout << "Total words: "<<count<<endl;
  return 0;
}
