#include<stdio.h>

int main()

{
    double N;

    scanf("%lf", &N);

    int N100, N50, N20, N10, N5, N2, M1, M2, M3, M4, M5, M6;


    N100 = N/100;
    N = N - (N100*100);

    N50 = N/50;
    N = N - (N50*50);

    N20 = N/20;
    N = N - (N20*20);

    N10 = N/10;
    N = N - (N10*10);

    N5 = N/5;
    N = N - (N5*5);

    N2 = N/2;
    N = N - (N2*2);

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", N100);
    printf("%d nota(s) de R$ 50.00\n", N50);
    printf("%d nota(s) de R$ 20.00\n", N20);
    printf("%d nota(s) de R$ 10.00\n", N10);
    printf("%d nota(s) de R$ 5.00\n", N5);
    printf("%d nota(s) de R$ 2.00\n", N2);

    M1 = N/1;
    N = N - (M1*1);

    N = N*100;

    M2 = N/50;
    N = N - (M2*50);

    M3 = N/25;
    N = N - (M3*25);

    M4 = N/10;
    N = N - (M4*10);

    M5 = N/5;
    N = N - (M5*5);

    M6 = N/1;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", M1);
    printf("%d moeda(s) de R$ 0.50\n", M2);
    printf("%d moeda(s) de R$ 0.25\n", M3);
    printf("%d moeda(s) de R$ 0.10\n", M4);
    printf("%d moeda(s) de R$ 0.05\n", M5);
    printf("%d moeda(s) de R$ 0.01\n", M6);

    return 0;
}
