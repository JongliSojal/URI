#include<stdio.h>

int main()

{
    double salary, tax;
    scanf("%lf", &salary);

    if (salary<=2000)
    {
        printf("Isento\n");
    }

    else if (salary>2000 && salary<=3000)
    {
        salary = salary-2000;
        tax = salary*.08;
        printf("R$ %.02lf\n", tax);
    }

    else if (salary>3000 && salary<=4500)
    {
       salary = salary-3000;
       tax = (1000*.08)+(salary*.18);
       printf("R$ %.02lf\n", tax);
    }

    else if (salary>4500)
    {
        salary = salary - 4500;
        tax = (1000*.08) + (1500*.18) + (salary*.28);
        printf("R$ %.02lf\n", tax);
    }

    return 0;
}
