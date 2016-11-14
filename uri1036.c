#include<stdio.h>
#include<math.h>

int main()

{
    double A, B, C, M, R1, R2;

    scanf("%lf %lf %lf", &A, &B, &C);

    M = sqrt((B*B)-(4*A*C));

    R1 = (-B + M)/(2*A);
    R2 = (-B - M)/(2*A);

    if ((B*B)<(2*A*C) || A==0)
    {
        printf("Impossivel calcular\n");
    }

    else
    {
        printf("R1 = %.05lf\n", R1);
        printf("R2 = %.05lf\n", R2);
    }

    return 0;
}
