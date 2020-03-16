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
  int n,x,res = 0;
  cout << "Enter X and N: \n";
  cin>>x >> n;
  for (size_t i = 0; i <=n; i++)
  {
    res = res + (pow(-1,i)* (pow(x,(2*i))))/factorial(2 * i);
  }
  cout << res;
  return 0;
}
