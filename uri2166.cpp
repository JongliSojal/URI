#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    double ans=0;

    cin >> n;

    while (n--)
    {
        ans += 2;
        ans = 1/ans;
    }

    ans += 1;

    printf("%.10lf\n", ans);

    return 0;
}
