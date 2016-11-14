#include<stdio.h>

int main()

{
    int X, Y;

    scanf("%d %d", &X, &Y);

    if (X==Y)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    if (X>12 && Y<12)
    {
        printf("O JOGO DUROU %d HORA(S)\n", ((24-X)+ Y));
    }

    if (X<12 && Y>12)
    {
        printf("O JOGO DUROU %d HORA(S)\n", (Y-X));
    }

    return 0;
}
