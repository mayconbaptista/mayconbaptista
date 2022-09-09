#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int num, aux, soma = 0;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        for(int j = (num - 1); j >= 0; j--)
        {
            cin >> aux;

            if(i == j && (aux % 2) != 0) soma += aux; 
        }
    }
    cout << soma << endl;
    return 0;
}