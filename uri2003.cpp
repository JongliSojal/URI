#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int h, m, delay;
    char c;

    while (cin >> h >> c >> m)
    {
        delay = 8*60 - (h*60 + m + 60);

        if (delay < 0)  cout << "Atraso maximo: " << abs(delay) << endl;

        else
        {
            delay = 0;
            cout << "Atraso maximo: " << delay << endl;
        }

    }

    return 0;
}
