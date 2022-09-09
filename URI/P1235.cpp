#include <bits/stdc++.h>
using namespace std;


int main (void)
{
    string str;
    int num;

    cin >> num;
    cin.ignore();
    for(int i = 0; i < num; i++)
    {
        getline(cin, str);

        int meio = trunc( str.size() / 2);
        //cout << meio << " ";

        reverse(str.begin(), str.begin() + meio);
        reverse(str.begin() + meio, str.end());

        cout << str << endl;
    }

}