/*input
*/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
  long long int n,ceil,num, dist,mid,x,y,fact;
  cin>>n;
  for (size_t i = 1; i <= n; i++)
  {
    cin>>num;
    ceil = int(sqrt(num));
    fact = pow(ceil,2);
    if(num == fact && ceil % 2 == 0) // getting even sq.number to place
    {
      x = ceil;
      y = 1;
      cout <<"Case "<<i<<": "<<x << " "<<y<<endl;
    }
    else if(num == fact && ceil % 2 != 0) // getting even sq.number to place
    {
      x = 1;
      y = ceil;
      cout <<"Case "<<i<<": "<<x << " "<<y<<endl;
    }
    else
    {
      ceil = ceil + 1;
      mid = pow(ceil,2) - (ceil - 1);
      if (num == mid) // same column, row for the required number
      {
        x = y = ceil;
      }
      else if((ceil%2 == 0 && num < mid) || (ceil%2 != 0 && num > mid)) // here column is decreasing, even & small, odd and big
      {
        dist = abs(num - mid);
        x = ceil - dist;
        y = ceil;
      }
      else if((ceil%2 == 0 && num > mid) || (ceil%2 != 0 && num < mid)) // here row is decreasing, odd & small, even and big
      {
        dist = abs(num - mid);
        y = ceil - dist;
        x = ceil;
      }
      cout <<"Case "<<i<<": "<<x << " "<<y<<endl;
    }
  }
  return 0;
}
