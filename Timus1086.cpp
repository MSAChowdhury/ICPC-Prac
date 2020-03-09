#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int n,k,num = 0,inc,i,a[100],s = 5,c,j;
    cin >> n;
    a[1] = 2;
    a[2] = 3;
    for( i = 0; i <n; i++)
    {
        cin >>k;
        inc = k;
        if(num < inc)
        {
            num = inc;
        }
    }

        for (j = 3; j <= num; )
        {
            for (c = 4; c <= s - 1; c++)
            {
                if (s%c == 0)
                break;
            }
                if (c == s)
                {
                    a[j] = c;
                    j++;
                }
                s++;
        }
        for (j = 1; j <= num;j++)
        {
        cout << a[j] <<endl;
        }

    return 0;
}
