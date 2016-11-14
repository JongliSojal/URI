#include<stdio.h>

int main()

{
    int N, i;

    scanf("%d", &N);

    for (i=1; i<=N ; i++)
    {
        double A, B, C;

        scanf("%lf %lf %lf", &A, &B, &C);

        double avg = ((A*2)+(B*3)+(C*5))/10;

        printf("%.01lf\n", avg);
    }

    return 0;
}
