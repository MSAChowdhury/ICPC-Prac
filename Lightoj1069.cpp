#include <iostream>
using namespace std;
int main()
{
  int n,pos[100],lift[100],time;
  cin >> n;
  for (size_t i = 1; i <= n; i++)
  {
    cin >> pos[i] >>lift[i];
    if(pos[i] > lift[i])
    {
      lift[i] = pos[i] - lift[i];
      pos[i] = pos[i] + lift[i];
      time = (pos[i] * 4) + (8 *2) + 3;
      cout <<"Case "<<i<<": "<< time << endl;
    }
    else
    {
      time = (lift[i] * 4) + (8 *2) + 3;
      cout <<"Case "<<i<<": "<< time << endl;
    }
  }
  return 0;
}
