#include<stdio.h>

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    printf("TRIANGULO: %0.3lf", 0.5*A*C);
    printf("\nCIRCULO: %0.3lf", 3.14159*C*C);
    printf("\nTRAPEZIO: %0.3lf", ((A+B)/2)*C);
    printf("\nQUADRADO: %0.3lf", B*B);
    printf("\nRETANGULO: %0.3lf\n", A*B);

    return 0;

}
