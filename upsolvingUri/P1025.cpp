#include <bits/stdc++.h>

using namespace std;

void BuscaLinear (vector <uint> vet, uint num){

    cout << num;

    for(int pos = 0; pos < vet.size(); pos++)
    {
        if(vet[pos] == num)
        {
            cout << " found at " << (pos + 1) << endl;
            return;
        }
    }
    cout << " not found\n";
}

int main (void)
{
    uint num1, num2, aux, casos = 1;

    while(true)
    {
        cin >> num1 >> num2;

        if(!num1 and !num2) break;
        vector <uint> vet;

        for(int i = 0; i < num1; i++)
        {
            cin >> aux;
            vet.push_back(aux);
        }

        sort(vet.begin(), vet.end());

        cout << "CASE# " << casos++ << ":\n";
        for(int i = 0; i < num2; i++)
        {
            cin >> aux;
            BuscaLinear(vet, aux);
        }
    }

    return 0;
}