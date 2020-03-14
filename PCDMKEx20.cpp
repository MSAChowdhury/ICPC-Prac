#include<iostream>
using namespace std;
int reverse(int number)
{
  long long int remainder, rev = 0;
  while(number != 0)
  {
    remainder = number%10;
    rev = rev*10 + remainder;
    number /= 10;
  }
  return rev;
}
int main()
{
  long long int n, number = 0, rev, count = 0;
  cin>>n;
  while (n != count)
  {
    number++;
    rev = reverse(number);
    if (number == rev)
    {
      count++;
    }
  }
  cout<<"The "<<n<<"th pallindrome is: "<<rev;
  return 0;
}
