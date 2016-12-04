#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    unsigned long long int n;

    cin >> n;

    printf("%.1lf %.1lf\n", n/log(n), 1.25506*(n/log(n)));

    return 0;
}
