#include<iostream>

using namespace std;

int main()
{
    int i, j, N, E, temp, count;

    cin >> N;

    int fail[N];

    for (i=1, j=0, count=0; i<=N; i++)
    {
        cin >> E;

        if (i==1)
        {
            temp = E;
            count++;
        }

        if (E>=temp)
        {
            temp=E;
            count++;
        }

        if (E<temp)
        {
            fail[j] = count;
            count++;
            j++;
        }
    }

    if (j>0) cout << fail[0] << endl;

    else
    {
        cout << "0" << endl;
    }

    return 0;
}
