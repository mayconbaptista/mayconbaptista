#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ulli;

ulli fat (ulli num){
    if(num == 0)
        return 1;
    else
        return num * fat(num - 1); 
}

int main (void){

    int num1, num2;

    while(cin >> num1 >> num2){

        cout << (fat(num1) + fat(num2)) << endl;
    }
    
    return 0;
}