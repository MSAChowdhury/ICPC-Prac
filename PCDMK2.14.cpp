#include <iostream>
using namespace std;
int main()
{
  int a = 0, b = 1,c,n;
  cin>> n;
  for (size_t i = 2; i <= n; i++)
  {
    c = a + b;
    a = b;
    b = c;
  }
  cout << n << "th Fibonacci : \n" << b;
  return 0;
}
