#include<iostream>
#include<string.h>
#include<cstdio>

using namespace std;

int main()
{
    string name;

    int distance, total = 0, count=0;

    while (getline(cin, name))
    {
        cin >> distance;
        cin.ignore();

        total += distance;
        count ++;
    }

    printf("%.1lf\n", total/(double)count);

    return 0;
}
