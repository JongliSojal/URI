#include<stdio.h>
#include<math.h>

int main()

{
    double i, T, f, n;

    scanf("%lf", &T);

    for (i=0; i<T; i++)
    {
        scanf("%lf", &n);
        f = ((pow(((1+sqrt(5))/2), n)) - (pow(((1-sqrt(5))/2), n)))/sqrt(5);

        printf("Fib(%.0lf) = %.0lf\n", n, f);
    }

    return 0;

}
