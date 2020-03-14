#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n,sum = 0,pos = 0,neg = 0;
  cin>>n;
  for (size_t i = 1; i <=n; i++)
  {
    if(i % 2 == 0)
      pos = pos + i;
      else
      neg = neg + i;
  }
  sum = neg - pos;
  cout << sum << '\n';
  return 0;
}
