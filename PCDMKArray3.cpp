#include <iostream>
using namespace std;
int main()
{
  char ch;
  cin >>  ch;
  if('a' <= ch && 'z' >= ch)
  {
    ch = ch - 'a' + 'A';
    cout << "The Captial converstion: "<<ch;
  }
  else if('A' <= ch && 'Z' >= ch)
  {
    ch = ch - 'A' + 'a';
    cout << "The Small converstion: "<<ch;
  }
  else
      cout << "The character is a digit";
  return 0;
}
