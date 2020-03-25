#include <iostream>
#include <string>
using namespace std;
int main()
{
  string str1, str2;
  cout << "Enter love birds name: \n";
  cin >> str1 >> str2;

  if(str2 > str1)
  cout << str2 << " goes date with "<< str1 <<endl;
  else
  cout << str1 << " doesn't like "<< str2 <<endl;

  return 0;
}
