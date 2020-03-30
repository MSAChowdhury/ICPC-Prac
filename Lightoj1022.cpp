#include <iostream>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  double r,area,pi = acos(-1);
  cin>>n;
  for (size_t i = 1; i <= n; i++)
  {
    cin >> r;
    if (r > 0 && r < 1000)
    {
      area = pow((r * 2), 2) - (pi * r * r);
      cout <<"Case "<<i<<": "<<fixed << setprecision(2) << area <<endl;
    }
    else
    {
      area = 0.00;
      cout <<"Case "<<i<<": "<<fixed << setprecision(2) << area <<endl;
    }
  }
  return 0;
}
