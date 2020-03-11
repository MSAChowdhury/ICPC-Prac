#include<iostream>

using namespace std;

int main()
{
  int a,b,c;
  cin >> a >> b >> c;
  if(a > b && a > c)
  {
    if(b > c)
    {
      cout << c <<"\t" << b <<"\t"<< a <<"\t" <<endl;
    }
    else
     cout << b <<"\t" << c <<"\t"<< a <<"\t" <<endl;
  }
  else if(b > a && b > c)
  {
    if(a > c)
    {
      cout << c <<"\t" << a <<"\t"<< b <<"\t" <<endl;
    }
    else
    cout << a <<"\t" << c <<"\t"<< b <<"\t" <<endl;
  }
  else
  {
    if(a > b)
    {
      cout << b <<"\t" << a <<"\t"<< c <<"\t" <<endl;
    }
    else
    cout << a <<"\t" << b <<"\t"<< c <<"\t" <<endl;
  }


  return 0;
}
