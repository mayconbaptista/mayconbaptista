#include <bits/stdc++.h>
using namespace std;


// busca linear
void isSort (string linha)
{
    for(int i = 0; (linha.size() >= 2) && (i < (linha.size() - 1)); i++)
    {
        if(tolower(linha[i]) > tolower(linha[i+1]))
        {
            cout <<"N\n";

            return;
        }
    }
    cout<<"0\n";
}


int main (void)
{
    int num;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        string linha;
        cin >> linha;

        cout << linha << ": ";
        isSort(linha);
    }

    return 0;
}