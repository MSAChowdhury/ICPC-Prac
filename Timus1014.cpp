#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,b,a,i;
    cin>>n;
    for(int i = 1;i < n;i++)
    {
      if(n % i == 0)
      {
          if((n/i) >= i)
          {
            a = n/i;
            b = i;
          }
      }
    }
   if(b == 1 && a == n)
    {
        cout <<-1;
    }
    else
        cout << b<<a;

    return 0;
}
