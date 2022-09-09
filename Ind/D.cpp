#include <bits/stdc++.h>
using namespace std;

bool Compare (pair <int, int> p1, pair <int, int> p2)
{
    return p1.first > p2.first;
}

int main(void)
{
    int num;

    while(true){

        cin >> num;

        if(num == 0) break;

        vector < pair<int, int>> vet;
        pair <int,int> par;

        for(int i = 1; i <= num; i++){

            cin >> par.first;
            par.second = i; // posição;
            vet.push_back(par);
        }

        

        stable_sort(vet.begin(), vet.end(), Compare);

        if(vet.size() >= 1){
            cout << vet[1].second << endl;
        }else{
            cout << vet[0].second << endl;
        }
    }
    return 0;
}