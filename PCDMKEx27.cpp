#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
  char ch[50] = "110010101010111010111001111010010011";
  int count = 0;
  for (size_t i = 0; ch[i] != '\0'; i++)
  {
    if(ch[i] == '1' && ch[i+1] == '1')
    {
      count++;
    }
  }
  cout << "Total 1: "<<count<<endl;
  return 0;
}
