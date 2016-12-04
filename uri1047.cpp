#include<iostream>
#include<stdlib.h>

using namespace std;

int main()

{
    int h1, m1, h2, m2, h, m;

    cin >> h1 >> m1 >> h2 >> m2;

    if (h1==h2 && m1==m2)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }

    else if (h1==h2 && m1!=m2)
    {
        h = 23;
        m = m2-m1;
        if (m<0)
        {
            m = 60+m;
        }
        cout << "O JOGO DUROU " << h << " HORA(S) E " << m <<" MINUTO(S)" << endl;

    }

    else
    {
        h = h2-h1;

        if (h<0)
        {
            h = 24+h;
        }

        m = m2-m1;

        if (m<0)
        {
            m = 60+m;
            --h;
        }

        cout << "O JOGO DUROU " << h << " HORA(S) E " << m <<" MINUTO(S)" << endl;
    }

    return 0;
}
