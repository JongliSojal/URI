#include<stdio.h>

void main()
{
    unsigned long long int n, i, t1, t2, f;

    scanf("%llu", &n);

    for (i=1, t1=0, t2=1; i<=n; i++)
    {
            if (i<n)
            {
                if (i==1)
                {
                    f = 0;
                    t1 = f;
                }

                else if (i==2)
                {
                    f = t1 + t2;
                    t2 = f;
                }

                else if (i%2==1)
                {
                    f = t1 + t2;
                    t1 = f;
                }

                else if (i%2==0)
                {
                    f = t1+t2;
                    t2 = f;
                }

            printf("%llu ", f);
            }

            if (i==n)
            {
                if (i==1)
                {
                    f = 0;
                    printf("%llu\n", f);
                }

                else
                {
                    f = t1 + t2;
                    printf("%llu\n", f);
                }
            }
    }
}
