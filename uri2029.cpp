#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double V, D;

    while (cin >> V >> D)
    {
        printf("ALTURA = %.2lf\n", V/(3.14*(D*D)/4));
        printf("AREA = %.2lf\n", 3.14*(D*D)/4);
    }

    return 0;
}
