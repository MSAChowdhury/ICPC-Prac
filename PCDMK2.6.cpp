#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if(year%400 == 0)
    {
        cout << year << " is Leap year";
    }
    else if (year%100 == 0)
    {
        cout << year << " is NOT Leap year";
    }
    else if (year%4 == 0)
    {
        cout << year << " is Leap year";
    }
    else
    {
        cout << year << " is NOT Leap year";
    }


    return 0;
}
