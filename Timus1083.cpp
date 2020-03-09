#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n, a,i;
    char k[10];

    cin>> n >> k;

    a = strlen(k);
    i = n;
    while (i > 1)
    {
        i = i - a;
        if (i > 0)
        {
            n = n * i;
        }
    }
    cout << n ;
    return 0;
}
