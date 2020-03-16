#include <iostream>
using namespace std;
int main()
{
  int n,i = 2, a = 0;
  cin>>n;

  while(i < n)
  {
    if(n%i == 0)
    {
      a = 1;
    }
    i++;
  }
  if(a != 0)
    cout << "The number you entered is not prime number" << endl;
  else
  cout << "The number you entered is prime number" << endl;

  return 0;
}
