#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

bool myfun(int a, int b)
{
  return(a > b);
}

using namespace std;
int main()
{
  vector<int> array;
  vector<int>::iterator it;
  array.push_back(30);
  array.push_back(60);
  array.push_back(40);
  array.push_back(320);
  array.push_back(50);

  sort(array.begin(), array.end(),myfun);
  for (it = array.begin(); it != array.end(); it++) {
    cout << *it <<"\t";
  }
  return 0;
}
