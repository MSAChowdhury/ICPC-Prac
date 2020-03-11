#include <iostream>
using namespace std;
int main()
{
  int x = 144, count = 0;
  while (x % 2 == 0)
  {
    x = x/2;
    count++;
  }
  cout << "The number of 100 divides by 2: "<<count<<endl;
  x = 1;
  while (x * 2 < 1000)
  {
    x =x * 2;;
  }
  cout << "The highest number which is power of two: "<<count<<endl;
  return 0;
}
