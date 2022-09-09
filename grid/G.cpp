#include <bits/stdc++.h>
using namespace std;
int lin = 0, col = 0;

void DFS (int i, int j,vector <vector <int>> &vet)
{
    if(vet[i][j] == 1)
    {
        vet[i][j] = 0;

        if(i + 1 < lin and vet[i+1][j] == 1)
            DFS(i + 1, j, vet);
        else if(i - 1 >= 0 and vet[i-1][j] == 1)
            DFS(i - 1, j, vet);
        else if(j + 1 < col and vet[i][j+1] == 1)
            DFS(i, j + 1, vet);
        else if(j - 1 >= 0 and vet[i][j-1] == 1)
            DFS(i, j - 1, vet);
        else
        {
            cout << (i + 1) << " " << (j + 1) << endl;
        }
    }
}

int main (void)
{
    int x = 0, y = 0;
    cin >>lin >>col;
    cin >>x>>y;

    vector <vector <int>> vet(lin);
    int aux;
    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> aux;
            vet[i].push_back(aux);
        }
    }

    DFS(x - 1, y - 1, vet);
    return 0;
}