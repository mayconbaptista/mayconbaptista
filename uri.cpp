#include <bits/stdc++.h>

using namespace std;



int main (void)
{
    int valor, num, aux;
    map <int, int> mapa;

    cin >> valor >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> aux;
        mapa[aux]++;
    }

    for(auto it = mapa.begin(); it != mapa.end(); it++)
    {
        aux = it->first * it->second;

        if(aux <= valor) valor -= aux;
    }

    if(aux == 0)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}