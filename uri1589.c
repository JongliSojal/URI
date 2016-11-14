#include<stdio.h>

int main()

{
    int N, i, R1, R2;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        scanf("%d %d", &R1, &R2);
        int R3 = (R1 + R2);

        printf("%d\n", R3);
    }

    return 0;
}
