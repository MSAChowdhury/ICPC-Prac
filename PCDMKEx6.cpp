#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x1,x2,x3,y1,y2,y3,area;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    area = .5 * ((x1*(y2-y3))+ (x2*(y3-y1))+(x3*(y1-y2)));
    cout << area <<endl;
    return 0;
}
