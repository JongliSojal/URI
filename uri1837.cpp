#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a, b, c, d, q, r;

    cin >> a >> b;

    if (a<0)
    {
        c = abs(b);

        for (r=0; r<c; r++)
        {
            d = a - r;
            if (d%b==0) break;
        }

        q = d/b;
    }

    else
    {
        q = a/b;
        r = a%b;
    }

    cout << q << " " << r << endl;

    return 0;
}
