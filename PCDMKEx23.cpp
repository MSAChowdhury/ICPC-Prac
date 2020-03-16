#include <iostream>
#include <math.h>
using namespace std;
int factorial(int num)
{
  int fact = 1;
  for (size_t i = 1; i <=num; i++)
  {
    fact = fact * i;
  }
  return fact;
}
int main()
{
  int n,r,res,sub;
  cin>>n >> r;
  sub = n - r;
  n = factorial(n);
  r = factorial(r);
  sub = factorial(sub);
  res = n / (r * sub);
  cout << res;
  return 0;
}
