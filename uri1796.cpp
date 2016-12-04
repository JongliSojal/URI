#include<iostream>

using namespace std;

int main()
{
    long long int i, Q;
    int vote, N, Y;

    cin >> Q;

    for (i=1, N=0, Y=0; i<=Q; i++)
    {
        cin >> vote;

        if (vote==1)    N += 1;
        if (vote==0)    Y += 1;
    }

    if (Y>N)    cout << "Y" << endl;
    else    cout << "N" << endl;

    return 0;
}
