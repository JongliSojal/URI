#include<iostream>

using namespace std;

int main()
{
    int day1, day2, h1, m1, s1, h2, m2, s2;
    int day, h, m , s;
    string d1, d2;
    char a;

    cin >> d1 >> day1 >> h1 >> a >>  m1 >> a >> s1;
    cin.ignore();
    cin >> d2 >> day2 >> h2 >> a >> m2 >> a >> s2;

    day = day2-day1;

    h = h2-h1;

    if (h<0)
    {
        h = 24+h;
        day--;
    }

    m = m2-m1;

    if (m<0)
    {
        m = 60+m;
        h--;
    }

    s = s2-s1;

    if (s<0)
    {
        s = 60+s;
        m--;
    }

    cout << day << " dia(s)" << endl;
    cout << h << " hora(s)" << endl;
    cout << m << " minuto(s)" << endl;
    cout << s <<" segundo(s)" << endl;

    return 0;
}
