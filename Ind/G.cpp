#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num, min, max, soma;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        soma = 0;
        cin >> min >> max;

        for(int j = min; j <= max; j++)
        {
            soma += j;
        }

        cout << soma << endl;
    }

    return 0;
}