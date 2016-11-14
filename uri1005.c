#include<stdio.h>

int main()

{
    double A, B, avg;

    scanf("%lf %lf", &A, &B);

    avg = ((A*3.5)+(B*7.5))/11;

    printf("MEDIA = %.05lf\n", avg);

    return 0;
}
