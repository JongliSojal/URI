#include<stdio.h>

int main()

{
    double I = 0, J = 1;
    int i;

    for (i=1; i<=3; i++)
    {
        printf("I=%.0lf J=%.0lf\n", I, J);
        J++;

        if (i==3)
        {
            int j;
            I = 0.2;
            J = 1.2;
            for (j=1; j<=3; j++)
            {

                printf("I=%.01lf J=%.01lf\n", I, J);
                J++;

                if (j==3)
                {
                    int k;
                    I = 0.4;
                    J = 1.4;

                    for (k=1; k<=3; k++)
                    {
                        printf("I=%.01lf J=%.01lf\n", I, J);
                        J++;

                        if (k==3)
                        {
                            int l;
                            I = 0.6;
                            J = 1.6;

                            for (l=1; l<=3; l++)
                            {
                                printf("I=%.01lf J=%.01lf\n", I, J);
                                J++;

                                if (l==3)
                                {
                                    int m;
                                    I = 0.8;
                                    J = 1.8;

                                    for (m=1; m<=3; m++)
                                    {
                                        printf("I=%.01lf J=%.01lf\n", I, J);
                                        J++;

                                        if (m==3)
                                        {
                                            int n;
                                            I = 1;
                                            J = 2;

                                            for (n=1; n<=3; n++)
                                            {
                                                printf("I=%.0lf J=%.0lf\n", I, J);
                                                J++;

                                                if (n==3)
                                                {
                                                    int o;
                                                    I = 1.2;
                                                    J = 2.2;

                                                    for (o=1; o<=3; o++)
                                                    {
                                                        printf("I=%.01lf J=%.01lf\n", I, J);
                                                        J++;

                                                        if (o==3)
                                                        {
                                                            int p;
                                                            I = 1.4;
                                                            J = 2.4;

                                                            for (p=1; p<=3; p++)
                                                            {
                                                                printf("I=%.01lf J=%.01lf\n", I, J);
                                                                J++;

                                                                if (p==3)
                                                                {
                                                                    int q;
                                                                    I = 1.6;
                                                                    J = 2.6;

                                                                    for (q=1; q<=3; q++)
                                                                    {
                                                                        printf("I=%.01lf J=%.01lf\n", I, J);
                                                                        J++;

                                                                        if (q==3)
                                                                        {
                                                                            int r;
                                                                            I = 1.8;
                                                                            J = 2.8;

                                                                            for (r=1; r<=3; r++)
                                                                            {
                                                                                printf("I=%.01lf J=%.01lf\n", I, J);
                                                                                J++;

                                                                                if (r==3)
                                                                                {
                                                                                    int s;
                                                                                    I = 2;
                                                                                    J = 3;

                                                                                    for (s=1; s<=3; s++)
                                                                                    {
                                                                                        printf("I=%.0lf J=%.0lf\n", I, J);
                                                                                        J++;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                    }
                }
            }

        }
    }
}

return 0;

}
