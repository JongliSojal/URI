#include<stdio.h>

int main()

{
    int age, count = 0, sum = 0;

    scanf("%d", &age);

    while (age>=0)
    {
        sum = sum + age;
        count = count + 1;

        if (age<0)
        {
            break;
        }

        scanf("%d", &age);
    }


    double avg = sum/(double)count;

    printf("%.02lf\n", avg);

    return 0;

}
