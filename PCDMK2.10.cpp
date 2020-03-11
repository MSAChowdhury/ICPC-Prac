#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
  for (size_t i = 0; i <= 10; i++)
  {
    if(i % 2 == 0)
    continue;
    cout << i << '\n';
  }

    for (size_t i = 0; i <= 10; i++)
    {
      if(i > 3)
      break;
      cout << i << '\n';
    }
    int a;
    cin >> a;
    while (a != EOF)
    {
      if(a == 0)
      break;
      cout << a << '\n';
    }
  return 0;
}
