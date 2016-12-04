#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int D, VF, VG;

    while (cin >> D >> VF >> VG)
    {
        if (12/(double)VF >= (sqrt(144+D*D))/(double)VG)  cout << "S" << endl;

        else    cout << "N" << endl;
    }

    return 0;
}
