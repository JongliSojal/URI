#include<stdio.h>

int main()
{
    int n = 1, X;
    scanf("%d", &X);

    while(n<=X)
    {
        printf("%d\n", n);
        n = n+2;
    }
    return 0;
}
