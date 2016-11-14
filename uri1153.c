#include<stdio.h>

int main()
{
    int i, N, R=1;
    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        R=R*i;
    }

    printf("%d\n", R);

    return 0;


}
