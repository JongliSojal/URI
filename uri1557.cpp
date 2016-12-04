#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()

{
    int i, j, width, max;
    long int T, temp, x;

    while (cin >> T && T!=0)
    {
        width = 0;
        max = pow(2, T*2-2);

        while (max>0)
        {
            max/=10;
            width++;
        }

        for (i=1, x=1; i<=T; i++, x*=2)
        {
            for (j=1, temp=x; j<=T; j++)
            {
                if (j==T)
                {
                    cout << right <<  setw(width) << temp << endl;
                }

                else
                {
                    cout << right <<  setw(width) << temp << " ";
                }

                temp *= 2;
            }
        }
        cout << endl;

    }


    return 0;
}
