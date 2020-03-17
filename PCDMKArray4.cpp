#include <iostream>
using namespace std;
int main()
{
  char ch;
  cin >>  ch;
  if('0' <= ch && '9' >= ch)
  {
    cout << "Enter a letter: ";
  }
  else
  {
    cout << "The integer version the character: \t";
    int d = ch - '0';
    cout << d;
  }

  return 0;
}
