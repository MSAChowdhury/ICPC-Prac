#include<iostream>

using namespace std;

int main()
{
  int n,i,res,res1 = 0;
  std::cin >> n;
  for(i = 1;i <= n;i++)
  {
    res = i * (n - i + 1);
    res1 = res1 + res;
  }
  cout << res1 << endl;
  return 0;
}
