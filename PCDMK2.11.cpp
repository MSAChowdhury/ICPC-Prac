#include <iostream>
using namespace std;
int main()
{
  int sum = 0,n;
  cin>> n;
  for (size_t i = 1; i <= n; i++) {
    for (size_t j = 1; j <=i; j++) {
      sum += j;
    }
  }
  cout << sum << '\n';
  return 0;
}
