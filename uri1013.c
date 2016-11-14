#include<stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int M = (A+B+abs(A-B))/2;
    int K = (M+C+abs(M-C))/2;

    printf("%d eh o maior\n", K);

    return 0;
}
