#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double base,height,hypotenuse,A,B,C,PI;
    cin >> base >> height >> hypotenuse;

    PI = acos(-1);
    C = (acos(((pow(height,2) + pow(base,2)) - (pow(hypotenuse,2)))/ 2 * height * base)); //* (180 / PI);
    A = (acos(((pow(height,2) + pow(hypotenuse,2)) - (pow(base,2)))/ 2 * height * hypotenuse));//* (180 / PI);
    B = (acos(((pow(base,2) + pow(hypotenuse,2)) - (pow(height,2)))/ 2 * base * hypotenuse));//* (180 / PI);
    cout << "A = \t" << A <<"B = \t" << B << "C = \t" << C << endl;
    return 0;
}
