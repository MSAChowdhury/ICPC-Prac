#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double base,height,hypotenuse,S,area;
    cin >> base >> height >> hypotenuse;

    S = (base + height + hypotenuse) / 2;
    area = sqrt((S * (S - base)* (S - hypotenuse)* (S - height)));
    cout << "Area = " << area <<endl;
    return 0;
}
