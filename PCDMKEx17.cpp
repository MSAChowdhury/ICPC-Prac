#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n,sum = 0;
  cout << "1 * n + 2 * (n - 1) +.....+(n * 1) terms \nEnter nth number: \n";
  cin>> n;
    sum =(n * (n + 1) *(n + 2)) / 6;
  cout << sum << '\n';
  return 0;
}
