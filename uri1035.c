#include<stdio.h>

int main()
{
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    int sumab = A + B;
    int sumcd = C + D;

    if (B>C && D>A && sumcd>sumab && A%2==0)
    {
        printf("Valores aceitos\n");
    }

    else
    {
        printf("Valores nao aceitos\n");
    }

    return 0;
}
