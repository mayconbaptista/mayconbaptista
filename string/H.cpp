#include <bits/stdc++.h>
using namespace std;

bool expre (string exp, int pos)
{
    if((exp.size() - 1) == pos)
    {
        return exp[pos] == 'T' ? true : false;
    }else
    {
        bool op = exp[pos] == 'T' ? true : false;

        if(exp[pos + 1] == '&')
            return op && expre(exp, pos + 2);
        else
            return op || expre(exp, pos + 2);
    }
}

int main (void)
{
    string exp, aux;

    while(cin >> exp)
    {
        stack <char> pilha;

        for(int i = 0; i < exp.size(); i++)
        {
            if(exp[i] == ')')
            {
                aux.clear();
                while(pilha.top() != '(')
                {
                    aux.push_back(pilha.top());
                    pilha.pop();
                }
                pilha.pop();
                char let = expre(aux, 0) ? 'T' : 'F';
                pilha.push(let);
            }
            else
                pilha.push(exp[i]);
        }

        aux.clear();
        while (!pilha.empty())
        {
            aux.push_back(pilha.top());
            pilha.pop();
        }
        
        if(expre(aux, 0))
            cout << "T" << endl;
        else
            cout << "F" << endl;
    }

    return 0;
}
