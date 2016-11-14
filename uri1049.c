#include<stdio.h>
#include<string.h>

int main()
{
    char name[256];
    char sub1[256];
    char sub2[256];

    gets(name);
    gets(sub1);
    gets(sub2);

    if (strcmp(name,"vertebrado")==0)
    {

        if (strcmp(sub1,"ave")==0)
        {


            if (strcmp(sub2,"carnivoro")==0)
            {
                printf("aguia\n");
            }

            else if (strcmp(sub2,"onivoro")==0)
            {
                printf("pomba\n");
            }
        }

        else if (strcmp(sub1,"mamifero")==0)
        {
            if (strcmp(sub2,"onivoro")==0)
            {
                printf("homem\n");
            }

            else if (strcmp(sub2,"herbivoro")==0)
            {
                printf("vaca\n");
            }
        }
    }

    else if (strcasecmp(name, "invertebrado")==0)
    {
        if (strcmp(sub1,"inseto")==0)
        {


            if (strcmp(sub2,"hematofago")==0)
            {
                printf("pulga\n");
            }

            else if (strcmp(sub2,"herbivoro")==0)
            {
                printf("lagarta\n");
            }
        }

        else if (strcmp(sub1,"anelideo")==0)
        {
            if (strcmp(sub2,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }

            else if (strcmp(sub2,"onivoro")==0)
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
