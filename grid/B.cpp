#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int lin = 0, col = 0;
    cin >> lin >> col;

    int vet[lin][col];

    for(int i = 0; i < lin; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin >> vet[i][j];
        }
    }

    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < lin; j++)
        {
            cout << vet[j][i] << ' ';
        }
        cout << endl;
    }

    return 0;
}