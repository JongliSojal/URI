#include<stdio.h>

int main()

{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A==C || A==B || C==B || B==(A+C) || A==(B+C) || C==(B+A))
    {
        printf("S\n");
    }

    else
    {
        printf("N\n");
    }

    return 0;
}
