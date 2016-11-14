#include<stdio.h>

int main()

{
    int N, i;
    int m = 1;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {
        printf("%d %d %d\n", m, m*m, m*m*m);
        printf("%d %d %d\n", m, ((m*m)+1), ((m*m*m)+1));
        m++;
    }

    return 0;
}
