#include<stdio.h>

int main()

{
    int N, i;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        int X, Y, j, sum = 0;

        scanf("%d %d", &X, &Y);

        for (j=1; j<=Y*2; j++)
        {
            if (X%2==1 || X%2==-1)
            {
                sum = sum + X;
            }
            X++;
        }

        printf("%d\n", sum);
    }

    return 0;
}
