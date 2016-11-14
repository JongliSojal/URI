#include<stdio.h>

int main()
{
    double time, speed;

    scanf("%lf", &time);
    scanf("%lf", &speed);
    double fuel = (time*speed)/12;

    printf("%.03lf\n", fuel);

    return 0;
}
