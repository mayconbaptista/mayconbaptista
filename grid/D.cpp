#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    string msn;
    int countt=0;

    getline(cin, msn);

    for(int i = 0; i < msn.size(); i++)
    {
        if(isdigit(msn[i])) countt++;
    }

    cout << countt << endl;
    return 0;
}