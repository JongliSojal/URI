#include<stdio.h>


int main()

{
    double N1, N2, N3, N4, avg;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    avg = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

    printf("Media: %.01lf\n", avg);

    if (avg >= 7)
    {
        printf("Aluno aprovado.\n");
    }

    else if (avg < 5)
    {
        printf("Aluno reprovado.\n");
    }

    else if (avg >= 5 && avg <= 6.9)
    {
        double score, newavg;
        printf("Aluno em exame.\n");
        scanf("%lf", &score);
        printf("Nota do exame: %.01lf\n", score);


        newavg = (avg+score)/2;

        if (newavg >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.01lf\n", newavg);
        }

        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.01lf\n", newavg);
        }


    }

    return 0;
}
