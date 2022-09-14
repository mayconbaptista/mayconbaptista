#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int num;
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++)
    {
        string linha;
        map <char, int> mapa;
        getline(cin, linha, '\n');
        int contt = 0;


        for(int j = 0; j < linha.length(); j++)
        {
            if(isalpha(linha[j]))
            {
                linha[j] = tolower(linha[j]);
                mapa[linha[j]]++;

                if(mapa[linha[j]] > contt)
                {
                    contt = mapa[linha[j]];
                }
            }
        }

        auto it = mapa.begin();
        while(it != mapa.end())
        {
            if(it->second == contt) cout<< it->first;
            //cout << it->first << " [" <<it->second << " ]\n"; 
            ++it;
        }
        cout << endl;
    }
}