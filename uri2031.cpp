#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int i, T;

    string p1, p2;

    cin >> T;

    for (i=1; i<=T; i++)
    {
        cin >> p1 >> p2;

        if (p1.compare("papel")==0 && p2.compare("papel")==0)
        {
            cout << "Ambos venceram" << endl;
        }

        if (p1.compare("pedra")==0 && p2.compare("pedra")==0)
        {
            cout << "Sem ganhador" << endl;
        }

        if (p1.compare("ataque")==0 && p2.compare("ataque")==0)
        {
            cout << "Aniquilacao mutua" << endl;
        }

        if (p1.compare("ataque")==0 && p2.compare("ataque")!=0)
        {
            cout << "Jogador 1 venceu" << endl;
        }

        if (p1.compare("ataque")!=0 && p2.compare("ataque")==0)
        {
            cout << "Jogador 2 venceu" << endl;
        }

        if (p1.compare("papel")==0 && p2.compare("pedra")==0)
        {
            cout << "Jogador 2 venceu" << endl;
        }

        if (p1.compare("pedra")==0 && p2.compare("papel")==0)
        {
            cout << "Jogador 1 venceu" << endl;
        }

    }

    return 0;
}
