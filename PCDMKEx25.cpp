#include <iostream>
#include <math.h>
using namespace std;
int conversion(int intergral,float fractional)
{
  int remainder, binaryInt = 0,i = 0,j,binaryTotal, n;
  int fractor[20];
  cout << "Enter how many precision after decimal point:\n";
  cin>>n;


  while (intergral != 0)
  {
    remainder = intergral % 2;
    binaryInt = binaryInt + remainder * pow(10,i);
    intergral = intergral / 2;
    i++;
  }
  /*while (n < 0)
  {
    fractional = fractional * 2;
    fractor[i] = fractional;
    i++;
    n--;
    binaryTotal = binaryInt + fractor[i]+'0';
  }*/

  return binaryInt;
}
int main()
{
  float fractional;
  double num,Total;
  int intergral;
  cout << "Enter your floating point decimal number:\n";
  cin>>num;
  intergral = int (num);
  fractional = num - intergral;
  Total = conversion(intergral,fractional);
  cout << "The Binary number is: \t" << Total;
  return 0;
}
