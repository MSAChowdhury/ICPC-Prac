#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for (size_t i = 0; i <=n; i++)
  {
    cout << "*" << '\n';
    for (size_t i = 0; i <= n; i++)
    {
      cout << "*";
    }
  }

  return 0;
}
