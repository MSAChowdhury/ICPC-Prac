#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double radius,circumference,PI;
    cin >> radius;

    PI = acos(-1);
   circumference = 2 * PI * radius;
    cout << "Circumference = " << circumference << endl;
    return 0;
}
