#include<stdio.h>

int main()

{
    int I = 1, J = 7;
    int i;

    for (i=1; i<=3; i++)
    {
        printf("I=%d J=%d\n", I, J);
        J--;

        if (i==3)
        {
            int j;
            I = I + 2;
            J = J + 5;

            for (j=1; j<=3; j++)
            {
                printf("I=%d J=%d\n", I, J);
                J--;

                if (j==3)
                {
                    int k;
                    I = I + 2;
                    J = J + 5;

                    for (k=1; k<=3; k++)
                    {
                        printf("I=%d J=%d\n", I, J);
                        J--;

                        if (k==3)
                        {
                            int l;
                            I = I + 2;
                            J = J + 5;

                            for (l=1; l<=3; l++)
                            {
                                printf("I=%d J=%d\n", I, J);
                                J--;

                                if (l==3)
                                {
                                    int m;
                                    I = I + 2;
                                    J = J + 5;

                                    for (m=1; m<=3; m++)
                                    {
                                        printf("I=%d J=%d\n", I, J);
                                        J--;
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
