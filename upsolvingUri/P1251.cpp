#include <bits/stdc++.h>

using namespace std;

bool func (pair<char, int> p1, pair<char, int> p2)
{
    if(p1.second == p2.second) 
        return p1.first > p2.first;
    else
        return p1.second < p2.second;
}

int main (void)
{
    string linha;
    int i = 0;
    while(getline(cin, linha))
    {
        map<char, int> mapa;
        vector<pair<char, int>> vet;
        if(i > 0) cout << endl;
        i++;


        for(int i = 0; i < linha.size(); i++)
        {
            mapa[linha[i]]++;
        }

        for(auto it : mapa) vet.push_back(it);
        sort(vet.begin(), vet.end(), func);
        for(auto it : vet) printf("%d %d\n", it.first, it.second);
    }

    return 0;
}