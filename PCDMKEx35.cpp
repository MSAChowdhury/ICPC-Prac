#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str1, str2;
  cout << "Enter love birds name: \n";
  cin >> str1 >> str2;

  int show = str1.compare(str2);
  if(show =! 0)
  {
    if(show < 0)
    cout << str2 << " goes date with "<< str1 <<endl;
    else
    cout << str1 << " doesn't like "<< str2 <<endl;
  }
  else
    cout << str1 << " is single "<<endl;
  return 0;
}
