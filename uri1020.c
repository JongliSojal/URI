#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int year = N/365;
    N = N - (year*365);

    int month = N/30;
    N = N - (month*30);

    int days = N%30;

    printf("%d ano(s)\n", year);
    printf("%d mes(es)\n", month);
    printf("%d dia(s)\n", days);

    return 0;
}
