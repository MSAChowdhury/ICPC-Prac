#include <iostream>

using namespace std;

int main()
{
    int num, par[5], impar[5], i = 0, j, k = 0, a, b;

    for(j = 0; j < 15; j++)
    {
        cin>>num;

        if(num %2 == 0)
        {
            par[i] = num;
            i++;
            if (i == 5)
            {
                for(i = 0; i < 5; i++)
                {
                    cout << "par[" << i << "]" <<  " = " << par[i] << endl;
                }
                i = 0;
            }
        }
        else
        {
            impar[k] = num;
            k++;
            if (k == 5)
            {
                for(k = 0; k < 5; k++)
                {
                    cout << "impar[" << k << "]" <<  " = " << impar[k] << endl;
                }
                k = 0;
            }
        }
    }

    for (a = 0; a < k; a++)
    {
        cout << "impar[" << a << "]" <<  " = " << impar[a] << endl;
    }

    for (b = 0; b < i; b++)
    {
        cout << "par[" << b << "]" <<  " = " << par[b] << endl;
    }
    return 0;
}
