#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
      cout << i <<endl;
    }
    for (i = 10; i >= 1; i--)
    {
      cout <<endl<< i <<endl;
    }
    for (i = 1; i <= 10; i+=2)
    {
      cout <<endl<< i <<endl;
    }
    i = 5;
    while (i <= 7) {
      cout <<endl<< i*2 <<endl;
      i++;
    }

    return 0;
}
