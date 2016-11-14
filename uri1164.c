#include<stdio.h>

int main()

{
    int N, i, j;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        long long int X, sum = 0;

        scanf("%lld", &X);

        for (j=1; j<=X/2; j++)
        {
            if (X%j==0)
            {
                sum = sum + j;
            }
        }

        if (X==sum)
        {
            printf("%lld eh perfeito\n", X);
        }

        else
        {
            printf("%lld nao eh perfeito\n", X);
        }
    }

    return 0;
}
