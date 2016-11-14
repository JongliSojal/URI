#include<stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int hr = N/3600;

    N = N - (hr*3600);

    int min = N/60;

    int sec = N%60;


    printf("%d:%d:%d\n",hr, min, sec);

    return 0;
}
