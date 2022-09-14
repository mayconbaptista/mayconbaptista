#include <bits/stdc++.h>

using namespace std;


string ita_neg (string &linha)
{
    int open_closeI = 0;
    int open_closeN = 0;

    string result;

    for(int i = 0; i < linha.size(); i++)
    {
        if(linha[i] == '_')
        {
            if(open_closeI == 0)
            {
                result += "<i>";
                open_closeI = 1;
            }else{
                result += "</i>";
                open_closeI = 0;
            }
        }
        else if(linha[i] == '*')
        {
            if(open_closeN == 0)
            {
                result += "<b>";
                open_closeN = 1;
            }else{
                result += "</b>";
                open_closeN = 0;
            }
        }
        else
            result.push_back(linha[i]);
    }

    return result;
}

int main (void)
{
    string linha;

    while (getline(cin,linha))
    {
        cout << ita_neg(linha) << endl;
    }
    return 0;
}