#include<iostream>

using namespace std;

int main()

{
    int L, i=1, V, major;

    while (cin >> L)
    {
        for (i=1, major=0; i<=L; i++)
        {
            cin >> V;

            if (V>major)
            {
                major = V;
            }
        }

        if (major < 10)
        {
            cout << "1" << endl;
        }

        else if (major>=10 && major<20)
        {
            cout << "2" << endl;
        }

        else if (major>=20)
        {
            cout << "3" << endl;
        }
    }


    return 0;
}


