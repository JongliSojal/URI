#include<stdio.h>
#include<math.h>

int main()

{
    double A, B, C, temp, temp2;
    int i;
    scanf("%lf %lf %lf", &A, &B, &C);

            for (i=0; i<3; i++)
            {
                if (A<B)
                {
                    temp = A;
                    A = B;
                    B = temp;
                }

                if (B<C)
                    {
                        temp2 = B;
                        B = C;
                        C = temp2;
                    }

            }


    if (A>=(B + C))
    {
        printf("NAO FORMA TRIANGULO\n");

    }

    else if ((A*A)==((B*B)+(C*C)))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if ((A*A)>((B*B)+(C*C)))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if ((A*A)<((B*B)+(C*C)))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (A==B && B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    else if ((A==B && A!=C && B!=C) || (B==C && B!=A && C!=A) || (C==A && C!=B && A!=B))
    {
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
