#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d\n", N);

    int R100 = N/100;
    N = N - (R100*100);

    int R50 = N/50;
    N = N - (R50*50);

    int R20 = N/20;
    N = N - (R20*20);

    int R10 = N/10;
    N = N - (R10*10);

    int R5 = N/5;
    N = N - (R5*5);

    int R2 = N/2;

    int R1 = N%2;

    printf("%d nota(s) de R$ 100,00\n", R100);
    printf("%d nota(s) de R$ 50,00\n", R50);
    printf("%d nota(s) de R$ 20,00\n", R20);
    printf("%d nota(s) de R$ 10,00\n", R10);
    printf("%d nota(s) de R$ 5,00\n", R5);
    printf("%d nota(s) de R$ 2,00\n", R2);
    printf("%d nota(s) de R$ 1,00\n", R1);

    return 0;
}
