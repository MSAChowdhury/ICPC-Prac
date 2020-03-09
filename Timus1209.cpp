#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int a[1000];
    int n, i,j=1,b[10],c,p=1,d,e = 1,f;

    for(double g = 0; g < 20;g++)
    {
        c = floor(pow(10,g));
        if( g == 0)
        {
             a[p] = c;
        }
        else
        {
            p = e + g + 1;
            f = c/10;
            d = c%10;
            e = p;
            while(f != 0 || d != 0)
            {
                a[p] = d;
                p--;
                c = c/10;
                f = c;
                d = f%10;
            }
        }

    }

    cin >> n;

    while( j <= n)
    {
        cin >> b[j];
        j++;
    }
    for(int k = 1; k <= n;k++)
    {
        i = b[k];
        cout << a[i] << " ";
    }

    return 0;
}

