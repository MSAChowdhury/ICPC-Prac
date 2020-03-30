#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
int main()
{
    double a,b,c,a1,b1,c1,n;
    cin>>n;
    for (size_t i = 1; i <= n; i++)
    {
      cin >> a >> b >> c;
      c1 = acos(((pow(a,2) + pow(b,2)) - pow(c,2)) / (2 * a * b)) * 57.2958;
      a1 = acos(((pow(b,2) + pow(c,2)) - pow(a,2)) / (2 * c * b)) * 57.2958;
      b1 = acos(((pow(a,2) + pow(c,2)) - pow(b,2)) / (2 * a * c)) * 57.2958;
      if ((a1 >= 90 && a1 < 90.01) || (b1 >= 90 && b1 < 90.01) || (c1 >= 90 && c1 < 90.01))
      {
        cout <<"Case "<<i<<": yes"<<endl;
      }
      else
        cout <<"Case "<<i<<": no"<<endl;
    }

    return 0;
}
