#include<iostream>
#include<cstdio>
#include<string.h>
#include<iomanip>


using namespace std;

int main()
{
    string c;
    int i, T;

    cin >> T;
    cin.ignore();

    for (i=1; i<=T; i++)
    {
        getline (cin , c);

        printf("%.2lf\n", c.size()*.01);
    }


    return 0;
}
