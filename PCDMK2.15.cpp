#include <iostream>
using namespace std;
int grade(int marks)
{
  if(marks >= 80)
  return 5;
  else if(marks >= 60)
  return 4;
  else if(marks >= 50)
  return 3;
  else if(marks >= 40)
  return 2;
  else if(marks >= 33)
  return 1;
  else
  return 0;
}
int main()
{
  int marks,point;
  cout << "Enter your prefered marks: \n";
  cin >> marks;
  point = grade(marks);
  cout << "Your point is: \n" << point;
  return 0;
}
