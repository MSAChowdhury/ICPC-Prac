#include<iostream>

using namespace std;

int main()
{
  int x,y;
  cin >> x >> y;
  if(x > 0 && y > 0)
  {
      cout << "The coordinate you entered is in the 1st Q U A D R A N T" <<endl;
  }
  else if(x < 0 && y < 0)
  {
      cout << "The coordinate you entered is in the 3rd Q U A D R A N T" <<endl;
  }
  else
  {
    if(x > 0 && y < 0)
    {
        cout << "The coordinate you entered is in the 4th Q U A D R A N T" <<endl;
    }
    else
    cout << "The coordinate you entered is in the 2nd Q U A D R A N T" <<endl;
  }


  return 0;
}
