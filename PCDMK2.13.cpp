#include<sstream>
#include<string>
using namespace std;
  char ch[100];
  string s;
  gets(ch);
  istringstream is(ch);
  while (is >> s)
  {
    cout << s <<endl;
  }
