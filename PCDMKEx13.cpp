#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n,sum = 0;
  cin>>n;
  for (size_t i = 1; i <=n; i++)
  {
    sum = sum + pow(i,2);
  }
  cout << sum << '\n';
  return 0;
}
