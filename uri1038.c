#include<stdio.h>

int main()
{
    int opt, quantity;

    scanf("%d %d", &opt, &quantity);

    if (opt==1)
    {
        printf("Total: R$ %.02lf\n", 4.00*quantity);
    }

    else if (opt==2)
    {
        printf("Total: R$ %.02lf\n", 4.50*quantity);
    }

    else if (opt==3)
    {
        printf("Total: R$ %.02lf\n", 5.00*quantity);
    }

    else if (opt==4)
    {
        printf("Total: R$ %.02lf\n", 2.00*quantity);
    }

    else if (opt==5)
    {
        printf("Total: R$ %.02lf\n", 1.50*quantity);
    }


    return 0;
}
