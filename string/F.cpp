
#include <bits/stdc++.h>
using namespace std;

bool comtem( string sub, string str)
{
    bool ok = false;

    for(int i = 0, j = 0; i < sub.size(); i++)
    {
        for(; j < str.size(); j++)
        {
            if(sub[i] == str[j])
            {
                ok = true;
                str[j] = ' ';
                break;
            }
            else
                ok = false;
        }

        if(ok == false) return false;
    }
    return true;
}

int main (void)
{
    string sub, str;

    while(cin >> sub >> str)
    {
        if(comtem(sub, str))
            cout << "sim\n";
        else
            cout << "nao\n"; 
    }

    return 0;
}
