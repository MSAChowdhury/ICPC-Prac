#include <iostream>

using namespace std;

int main()
{
    int n,a,c,d;
    cin >> n>> a;
    c = (n + a) - (n + 1);
    d = (n + a) - (a + 1);
    cout << c <<" "<< d << endl;

    return 0;
}

