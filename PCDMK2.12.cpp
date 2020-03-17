#include <iostream>
using namespace std;
int main()
{
  int a[1000],id;
  for (size_t i = 0; i < 10; i++)
  {
    a[i] = 0;
  }
  for (size_t i = 0; i < 100; i++)
  {
    cin >> id;
    a[id - 1]++;
  }
  int maximum_score = 0;
  for (size_t i = 0; i < 10; i++)
  {
    if (maximum_score < a[i])
    {
      maximum_score = a[i];
    }
  }
  cout << "Winners are:" << '\n';
  for (size_t i = 0; i < 10; i++)
  {
    if (maximum_score == a[i])
    {
      cout << i+1 << '\n';
    }
  }
  return 0;
}
