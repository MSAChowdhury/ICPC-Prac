#include <iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
  string str1, str2;
  cout << "Enter one string then a substring: "<<endl;
  //getline function takes input as sentence using string type (cin - takes input,str - loctaes the input)
  getline(cin,str1);
  getline(cin,str2);
  int count = 0,j = 0;
  for (size_t i = 0; i < str1.length(); i++)
  {
    if(str1[i] == str2[j])
    {
      //words count
      if(j == (str2.length() - 1))
      {
        count++;
        j = 0;
      }
      j++;
    }
    else
      j = 0;
  }
  cout <<str2<< " is a subtring"<<endl;
  cout <<"The occurs in sentence - "<<count<<" times"<<endl;
  return 0;
}
