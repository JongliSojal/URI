#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int i, P, N, H, K, temp, flag=1;
    cin >> P >> N;

    for (i=1; i<=N; i++)
    {
        cin >> H;
        if (i==1)
        {
            temp = H;
        }
        else
        {
            K = abs(H-temp);
            if (K>P)
            {
                flag = 0;
            }
            temp = H;
        }
    }

    if (flag==1)
    {
        cout << "YOU WIN" << endl;
    }

    else
    {
        cout << "GAME OVER" << endl;
    }

    return 0;
}
