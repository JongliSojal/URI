#include<stdio.h>

int main()

{
    long long int A;
    int N, i, j;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        int checker = 0;

        scanf("%lld", &A);

        for (j=2; j<=(A/2); j++)
        {
            if (A%j==0)
            {
                checker = 1;
                break;
            }
        }

        if (checker == 0)
        {
            printf("%d eh primo\n", A);
        }

        else
        {
            printf("%d nao eh primo\n", A);
        }

    }


    return 0;
}
