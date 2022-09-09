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

int dist (pair <int, int> p1, int x1, int y2)
{
    return abs(abs(p1.first - x1) - abs(p1.second - y2)); 
}

void DFS (pair <int, int> p1, int i, int j, int r, vector <string> &vet)
{
    if(dist(p1, i, j) <= r)
    {
        if(vet[i][j] == '.')
            vet[i][j] == '*';
        else if(vet[i][j] == 'o')
            vet[i][j] == '#';
        else 
            return;

        if(i + 1 < lin)
            DFS(p1, i + 1, j, r, vet);
        if(i - 1 >= 0)
            DFS(p1, i - 1, j,r,vet);
        if(j + 1 < col)
            DFS(p1, i, j + 1, r, vet);
        if(j - 1 >= 0)
            DFS(p1, i, j - 1, r, vet);
        
        if(((i - 1) >= 0) && ((j - 1) >= 0))
            DFS(p1, i - 1, j - 1, r, vet);
        if(((i + 1) < lin) && ((j + 1) < col))
            DFS(p1, i + 1, j + 1, r, vet);
        if(((i - 1) >= 0) && ((j + 1) >= 0))
            DFS(p1, i - 1, j + 1, r, vet);
        if(((i + 1) >= 0) && ((j - 1) >= 0))
            DFS(p1, i - 1, j + 1, r, vet);
    }
}


int main (void)
{
    int num;
    cin >> num;

    while(num--)
    {
        int size = 0;
        vector <string> vet(size);
        char aux;

        cin >> size;

        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                cin >> aux;
                vet[i].push_back(aux);
            }
        }

        int edif = 0;
        pair <int, int> p;
        for(int i = 0; i < edif; i++)
        {
            cin >> p.first >> p.second;
            vet[p.first][p.second] = 'o';
        }

        int bombas = 0, raio = 0;
        for(int i = 0; i < bombas; i++)
        {
            cin >> p.first >> p.second;
            DFS(p, p.first, p.second, raio, vet);
        }

        imprime(vet);
    }
    return 0;
}