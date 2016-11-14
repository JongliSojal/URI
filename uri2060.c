#include<stdio.h>

int main()

{
    int N, i, m2 = 0, m3 = 0, m4 = 0, m5 = 0;

    scanf("%d", &N);

    int B[N];

    for (i=0; i<N; i++)
    {
        scanf("%d", &B[i]);
    }

    for (i=0; i<N; i++)
    {
        if (B[i]%2==0)
        {
            m2 += 1;
        }

        if (B[i]%3==0)
        {
            m3 += 1;
        }

        if (B[i]%4==0)
        {
            m4 += 1;
        }

        if (B[i]%5==0)
        {
            m5 += 1;
        }
    }

    printf("%d Multiplo(s) de 2\n", m2);
    printf("%d Multiplo(s) de 3\n", m3);
    printf("%d Multiplo(s) de 4\n", m4);
    printf("%d Multiplo(s) de 5\n", m5);

    return 0;
}
