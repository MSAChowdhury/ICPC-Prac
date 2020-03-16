#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n,sum = 0;
  cout << "1+(2+3)+(4+5+6)+..... to n terms \nEnter nth number: \n";
  cin>> n;
  sum =(n * (n + 1)) / 2;
  cout << sum << '\n';
  return 0;
}
