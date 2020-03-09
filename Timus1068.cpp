#include <iostream>

using namespace std;

int main()
{
    int a,c;
    cin >> a;
    if(a <= 0)
    {
        c = a;
        for(;a != 0;)
        {
            a = a + 1;
            c = (c + a);
        }
        cout << c + 1 << endl;
    }
    else
    {
        c = a;
        for(;a != 0;)
        {
            a = a - 1;
            c = c + a;
        }
        cout << c << endl;
    }
    return 0;
}

