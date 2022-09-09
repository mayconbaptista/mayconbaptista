#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int num;
    string lixo;
    cin >> num;

    pair <int, int> jogo1, jogo2;

    for(int i = 0; i < num; i++)
    {
        scanf("%d x %d",&jogo1.first, &jogo1.second);
        scanf("%d x %d",&jogo2.first, &jogo2.second);

        int time1 = jogo1.first + jogo2.second;
        int time2 = jogo1.second + jogo2.first;

        if(time1 > time2)
            cout << "Time 1\n";
        else if(time1 < time2)
            cout << "Time 2\n";
        else if(jogo1.second > jogo2.second)
            cout << "Time 2\n";
        else if(jogo2.second > jogo1.second)
            cout << "Time 1\n";
        else
            cout << "Penaltis\n";
    }
    return 0;
}