#include <bits/stdc++.h>
using namespace std;
int lin = 0, col = 0;

void imprime (vector <string> vet)
{
    for(int i = 0; i < vet.size(); i++)
    {
        for(int j = 0; j < vet[i].size(); j++)
        {
            cout << vet[i][j] << " "; 
        }
        cout<<endl;
    }
    cout<<endl;
}

void DFS (int i, int j,vector <string> &vet)
{
    if(vet[i][j] == 'A')
    {
        vet[i][j] = 'T';

        if(i + 1 < lin)
            DFS(i + 1, j, vet);
        if(i - 1 >= 0)
            DFS(i - 1, j, vet);
        if(j + 1 < col)
            DFS(i, j + 1, vet);
        if(j - 1 >= 0)
            DFS(i, j - 1, vet);
    }
}

int main (void)
{
    
    while(cin >> lin >> col)
    {
        if(!cin && !col) return 0;

        vector <string> vet(lin);

        int x = 0, y = 0, primeiro = 1;
        char aux;

        for(int i = 0; i < lin; i++)
        {
            for(int j = 0; j < col; j++)
            {
                cin >> aux;
                vet[i].push_back(aux);

                if(aux == 'T')
                {
                    x = i;
                    y = j;
                }
            }
        }

        vet[x][y] = 'A';
        DFS(x, y, vet);
        
        imprime(vet);
    }

    return 0;
}