#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    double a , b;

    while (true)
    {
        cin >> a >> b;

        if(a == 0 && b == 0) return 0;
        
        double res = trunc(a / b);

        if(res < 6) res = 6;
        if(res > 20) res = 20;

        cout << "P";
        for(double i = 0; i < (res - 4); i++)
        {
            cout << "o";
        }
        cout<<"dle"<<endl;
    }
    
    return 0;
}