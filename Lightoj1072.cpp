#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  int n,bullets;
  float radius,r1,pi = acos(-1);
  cin>>n;
  for (size_t i = 1; i <= n; i++)
  {
    cin>>radius>>bullets;
    r1 = sqrt(16 / (pow(pi,2) * pow(radius,2) * bullets));
    cout <<"Case "<<i<<": "<<r1<<endl;
  }
  return 0;
}
