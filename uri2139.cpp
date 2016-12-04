#include<iostream>

using namespace std;

int main()
{
    int month, day, ans;

    while (cin>> month >> day)
    {
        if (month==1)   ans = 360-day;

        else if (month==2)  ans = 329-day;

        else if (month==3)  ans = 300-day;

        else if (month==4)  ans = 269-day;

        else if (month==5)  ans = 239-day;

        else if (month==6)  ans = 208-day;

        else if (month==7)  ans = 178-day;

        else if (month==8)  ans = 147-day;

        else if (month==9)  ans = 116-day;

        else if (month==10) ans = 86-day;

        else if (month==11) ans = 55-day;

        else if (month==12) ans = 25-day;


        if (ans==0) cout << "E natal!" << endl;
        else if (ans==1) cout << "E vespera de natal!" << endl;
        else if (ans<0) cout << "Ja passou!" << endl;
        else cout << "Faltam " << ans << " dias para o natal!" << endl;

    }
    return 0;
}
