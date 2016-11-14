#include<stdio.h>

int main()

{
    int M, N;

    scanf("%d %d", &M, &N);

    while (M>0 && N>0)
    {
        if (M<N)
    {
        int i, sum = 0, count = N - M;

        for (i=1; i<=count+1; i++)
        {
            printf("%d ", M);
            sum = sum + M;
            M++;

        }
        printf("Sum=%d\n", sum);
    }

    else if (M>N)
    {
        int i, sum = 0, count = M - N;

        for (i=1; i<=count+1; i++)
        {
            printf("%d ", N);
            sum = sum + N;
            N++;

        }

        printf("Sum=%d\n", sum);


    }

    scanf("%d %d", &M, &N);

    if (M<=0 || N<=0)
    {
        break;
    }
    }


    return 0;

}
