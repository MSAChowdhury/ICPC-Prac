#include <iostream>
using namespace std;
int main()
{
  char ch;
  cin >>  ch;
  if('a' <= ch && 'z' >= ch)
    cout << "The character is a small letter";
  else if('A' <= ch && 'Z' >= ch)
    cout << "The character is a Capital letter";
  else
      cout << "The character is a digit";
  return 0;
}
