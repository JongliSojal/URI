#include<stdio.h>

int main()

{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    if ((A+B)>C && (B+C)>A && (C+A)>B)
    {
        double perimeter = (A+B+C);
        printf("Perimetro = %.01lf\n", perimeter);
    }

    else
    {
        double area = ((A+B)*C)/2;
        printf("Area = %.01lf\n", area);
    }

    return 0;
}
