#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n,fact = 1;
  cin>>n;
  for (size_t i = 1; i <=n; i++)
  {
    fact = fact * i;
  }
  cout << fact;
  return 0;
}
