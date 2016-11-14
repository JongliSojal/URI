#include<stdio.h>

int main()

{
    long long int A, B, C, temp, temp1;
    int i;

    scanf("%lld %lld %lld", &A, &B, &C);

    for (i=1; i<=4; i++)
        {
            if (A<B)
            {
                temp = A;
                A = B;
                B = temp;
            }

            else if (B<C)
            {
                temp1 = B;
                B = C;
                C = temp1;
            }

        }

        if (A>=(B+C))
        {
            printf("Invalido\n");
        }

        else
        {
            printf("Valido-");

            if (A==B && B==C)
            {
                printf("Equilatero\n");
            }

            else if (A!=B && B!=C && C!=A)
            {
                printf("Escaleno\n");
            }

            else if ((A==B && A!=C && B!=C) || (B==C && B!=A && C!=A) || (C==A && C!=B && A!=B))
            {
                printf("Isoceles\n");
            }

            if ((A*A)==((B*B)+(C*C)))
            {
                printf("Retangulo: S\n");
            }

            else
            {
                printf("Retangulo: N\n");
            }

        }


        return 0;
}
