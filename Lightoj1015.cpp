#include <iostream>
using namespace std;
int solution(int n)
{
  int num[20], case1 = 0;
  for (size_t j = 0; j < n; j++)
  {
    cin >> num[j];
    if(num[j] > 99) //Taking two integers, if found three place integers, it will make it 0
    {
      num[j] = 0;
    }
    case1 = case1 + num[j];
  }
  return case1;
}
int main()
{
  int t,n,sln;
  cin >> t;
  cout << endl;

  for (size_t i = 0; i < t; i++)
  {
    cin >> n;
    sln = solution(n); // calling the function again and again
    cout <<sln<<endl;
  }

  return 0;
}
