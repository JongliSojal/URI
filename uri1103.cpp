#include<iostream>

using namespace std;

int main()
{
    int H1, M1, H2, M2, sleep;

    while (cin >> H1 >> M1 >> H2 >> M2)
    {
        if (H1==0 && M1==0 && H2==0 && M2==0)   break;

        else
        {
            if (H1==0)
            {
                H1=24;
            }
            if (H2==0)
            {
                H2=24;
            }

            sleep = (H2*60+M2) - (H1*60+M1);
        }

        if (sleep<0)    cout << 1440+sleep << endl;
        else    cout << sleep << endl;

    }

    return 0;
}
