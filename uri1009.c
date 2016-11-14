#include<stdio.h>

int main()
{
    char name[100];
    double salary, sale;
    scanf("%s", &name);
    scanf("%lf", &salary);
    scanf("%lf", &sale);

    double percentage = (sale*15)/100;

    printf("TOTAL = R$ %.02lf\n", salary + percentage);

    return 0;
}

