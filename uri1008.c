#include<stdio.h>

int main()
{
    int number, work_hour;
    double rate;

    scanf("%d", &number);
    scanf("%d", &work_hour);
    scanf("%lf", &rate);

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %0.2lf\n", work_hour*rate);

    return 0;
}
