#include<stdio.h>

int main()

{
    int N, i;

    scanf("%d", &N);

    int m = N;

    for (i=1; i<=N; i++)
    {


        if (N%m==0)
        {
            printf("%d\n", N/m);
        }
        m--;

    }

    return 0;
}
