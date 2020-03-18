#include <iostream>
using namespace std;
int fibonacci(int num)
{
  if(num == 0)
  return 0;
  if(num == 1)
  return 1;
  return fibonacci(num - 1) + fibonacci(num - 2);
}
int main()
{
  int num,fibo;
  cin>> num;
  fibo = fibonacci(num);
  cout<< "Fibonacci: \n" << fibo;
  return 0;
}
