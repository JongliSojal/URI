#include<stdio.h>

int main()

{
    int N, k;

    scanf("%d", &N);

    int i, X[N];

    for (i=0; i<N; i++)
    {
        scanf("%d", &X[i]);
    }

    int min = X[0], pos = 0;

    for (i=0; i<N; i++)
    {
        if (X[i]<min)
        {
            min = X[i];
            pos = i;
        }

    }

    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", pos);


    return 0;
}
