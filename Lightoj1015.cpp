#include <iostream>
using namespace std;
int solution(long int n)
{
  long int num[1000], case1 = 0;
  for (size_t j = 0; j < n; j++)
  {
    cin >> num[j];
    if(num[j] > 99 || num[j] < 0) //Taking two integers, if found three place integers, it will make it 0
    {
      num[j] = 0;
    }
    case1 = case1 + num[j];
  }
  return case1;
}
int main()
{
  long int t,n,sln;
  cin >> t;

  for (size_t i = 1; i <= t; i++)
  {
    cin >> n;
    sln = solution(n); // calling the function again and again
    cout <<"Case "<<i<<": "<< sln <<endl;
  }

  return 0;
}
