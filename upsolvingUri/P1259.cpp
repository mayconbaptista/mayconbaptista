#include <bits/stdc++.h>

using namespace std;

bool func (int a, int b)
{
    return !(a < b);
}

int main (void)
{
    vector <int> pares, impares;
    int linhas, num;

    cin >> linhas;

    for(int i = 0; i < linhas; i++)
    {
        cin >> num;

        if(num % 2 == 0)
            pares.push_back(num);
        else
            impares.push_back(num);
    }

    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end(), func);

    for(int i : pares){
        cout << i << endl;
    }
    
    for(int i : impares){
        cout << i << endl;
    }

    return 0;
}