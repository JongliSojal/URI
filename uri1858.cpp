#include<iostream>

using namespace std;

int main()
{
    int i, T, n, min, count;

    cin >> T;

    for (i=1; i<=T; i++)
    {
        cin >> n;

        if (i==1)
        {
            min = n;
            count = i;
        }

        else if (n<min)
        {
            min = n;
            count = i;
        }
    }

    cout << count << endl;

    return 0;
}
