#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int num, chave;

    cin >> num;
    string msn, cifra;

    for(int i = 0; i < num; i++)
    {
        cin >> chave;
        cin >> msn;

        for(int j = 0; j < msn.length(); j++)
        {
            if(isalpha(msn[j]))
            {
                char aux = msn[j] + chave;

                if(aux > 'Z')
                {
                    aux = aux - 'Z' + 'A' -1;
                }
                else if(aux < 'A')
                {
                    aux = 'Z' - ('A' - aux) +1; 
                }
                cifra.push_back(aux);
            }

        }
        cout << cifra << endl;
        cifra.clear();
    }

    return 0;
}