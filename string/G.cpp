#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    int numA, numB;

    while(cin >> numA >> numB)
    {
        bool existe = false;
        string aux, xua, min, max;

        for(int i = numA; i <= numB; i++)
        {
            aux = to_string(i);

            xua = aux;
            reverse(xua.begin(), xua.end());

            if(xua == aux) min = aux;
        }
        
        if(min.length() == 0)
        {
            cout << -1 << endl;
            continue;
        }

        for(int i = numB; i >= numA; i--)
        {
            aux = to_string(i);

            xua = aux;
            reverse(xua.begin(), xua.end());

            if(xua == aux) max = aux;
        }

        cout << max << " " << min << endl;
    }
    return 0;
}