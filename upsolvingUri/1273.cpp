#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int num, gambiarra = 0;

    while(cin >> num)
    {
        if(num == 0) return 0;

        vector<string> vet;
        string aux;
        int maior = 0;

        for(int i = 0; i < num; i++)
        {
            cin >> aux;
            vet.push_back(aux);

            if(aux.size() > maior) maior = aux.size();
        }

        if(gambiarra++ != 0) cout<<endl;

        for(int i = 0; i < vet.size(); i++)
        {
            for(int j = 0; j < (maior - vet[i].size()); j++)
            {
               cout << ' ';
            }
            cout << vet[i] <<endl;
        }
    }
    return 0;
}