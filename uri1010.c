#include<stdio.h>

int main()
{
    int code1, num1, code2, num2;
    double price1, price2;

    scanf("%d %d %lf", &code1, &num1, &price1);
    scanf("%d %d %lf", &code2, &num2, &price2);

    printf("VALOR A PAGAR: R$ %.02lf\n", (num1*price1)+(num2*price2));

    return 0;

}
