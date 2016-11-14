#include<iostream>

using namespace std;

int main()

{
    int N, i, g, mary, john;

    while (cin >> N)
    {
        if (N==0)
        {
            break;
        }

        else
        {
            for (i=1, mary=0, john=0; i<=N; i++)
            {
                cin >> g;

                if (g==0)
                {
                    mary += 1;
                }

                else if (g==1)
                {
                    john += 1;
                }
            }

            cout << "Mary won " << mary <<" times and John won "<< john <<" times" << endl;
        }


    }

    return 0;
}
