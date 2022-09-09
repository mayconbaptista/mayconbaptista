#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;

    while (true)
    {
        pair <int, int> par, ant;
        int soma = 0;
        cin >> num;

        if(num == -1) break;
        
        for(int i = 0; i < num; i++)
        {
            cin >> par.first >> par.second;

            if(i > 0){
                
                soma += (par.first * (par.second - ant.second));
            }else{
                soma += par.first * par.second;
            }
            ant = par;
        }

        cout << soma << " milhas\n";
    }
    return 0;
}