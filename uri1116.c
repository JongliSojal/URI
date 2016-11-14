#include<stdio.h>

int main()

{
    int N, i;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (Y!=0)
        {
            double Z = (double) X/(double) Y;

            printf("%.01lf\n", Z);
        }

        else if (Y==0 && X!=0)
        {
            printf("divisao impossivel\n");
        }
    }

    return 0;
}
