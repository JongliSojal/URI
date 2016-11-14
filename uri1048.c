#include<stdio.h>

int main()
{
    double salary;

    scanf("%lf", &salary);

    if (salary <= 400)
    {
        double newsalary = (salary + (salary*0.15));
        printf("Novo salario: %.02lf\n", newsalary);
        printf("Reajuste ganho: %.02lf\n", newsalary - salary);
        printf("Em percentual: 15 %%\n");
    }

    else if (salary > 400 && salary <= 800)
    {
        double newsalary = salary + (salary*0.12);
        printf("Novo salario: %.02lf\n", newsalary);
        printf("Reajuste ganho: %.02lf\n", newsalary - salary);
        printf("Em percentual: 12 %%\n");
    }

    else if (salary > 800 && salary <= 1200)
    {
        double newsalary = salary + (salary*0.10);
        printf("Novo salario: %.02lf\n", newsalary);
        printf("Reajuste ganho: %.02lf\n", newsalary - salary);
        printf("Em percentual: 10 %%\n");
    }

    else if (salary > 1200 && salary <= 2000)
    {
        double newsalary = salary + (salary*0.07);
        printf("Novo salario: %.02lf\n", newsalary);
        printf("Reajuste ganho: %.02lf\n", newsalary - salary);
        printf("Em percentual: 7 %%\n");
    }

    else if (salary > 2000)
    {
        double newsalary = salary + (salary*0.04);
        printf("Novo salario: %.02lf\n", newsalary);
        printf("Reajuste ganho: %.02lf\n", newsalary - salary);
        printf("Em percentual: 4 %%\n");
    }

    return 0;
}
