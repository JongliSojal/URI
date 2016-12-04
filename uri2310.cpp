#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, N, S, B, A, S1, B1, A1, Ts=0, Tb=0, Ta=0, Ts1=0, Tb1=0, Ta1=0;
    string name;

    cin >> N;

    for (i=1; i<=N; i++)
    {
        cin >> name >> S >> B >> A >> S1 >> B1 >> A1;
        Ts += S;
        Tb += B;
        Ta += A;

        Ts1 += S1;
        Tb1 += B1;
        Ta1 += A1;
    }

    printf("Pontos de Saque: %.2lf %%.\n", (Ts1*100)/double(Ts));
    printf("Pontos de Bloqueio: %.2lf %%.\n", (Tb1*100)/double(Tb));
    printf("Pontos de Ataque: %.2lf %%.\n", (Ta1*100)/double(Ta));

    return 0;
}
