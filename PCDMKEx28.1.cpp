#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
  vector<int> array;
  vector<int>::iterator it;
  array.push_back(30);
  array.push_back(60);
  array.push_back(40);
  array.push_back(50);
  array.push_back(320);

  sort(array.end(),array.begin(),myfunc);
  for (it = array.begin(); it < array.end(); it++)
  {
    cout << *it <<"\t";
  }
  return 0;
}
