#include <iostream>
using namespace std;
int solution(int n)
{
  int num[20], case1 = 0;
  cout <<"Enter dust unit: "<<endl;
  for (size_t j = 0; j < n; j++)
  {
    cin >> num[j];
    if(num[j] > 99) //Taking two integers, if found three place integers, it will make it 0
    {
      cout <<"PLEASE! give only two integers"<<endl;
      num[j] = 0;
      n++;
    }
    case1 = case1 + num[j];
  }
  return case1;
}
int main()
{
  int t,n,sln;
  cout <<"Enter case: "<<endl;
  cin >> t;
  cout << endl;

  for (size_t i = 0; i < t; i++)
  {
    cout <<"Enter no. of students: "<<endl;
    cin >> n;
    sln = solution(n); // calling the function again and again
    cout << "Total dust: "<<sln<<endl;
  }

  return 0;
}
