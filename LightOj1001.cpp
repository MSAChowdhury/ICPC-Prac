#include <iostream>
using namespace std;
int main()
{
  int n,value[25],res = 0,j = 0;
  cin >> n;
  for (size_t i = 0; i < n; i++)
  {
    cin >> value[i];
  }
  for (size_t i = 0; i < n; i++) {
    if(value[i] <= 10)
    {
      cout << value[i] - value[i] << " "<< value[i]<<endl;
    }
    else
    {
      res = value[i] - 10;
      cout << res << " " <<value[i] - res<<endl;
    }
  }

  return 0;
}
