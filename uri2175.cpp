#include<iostream>

using namespace std;

int main()
{
    double O, B, I;

    cin >> O >> B >> I;

    if (O==B || B==I || I==O)   cout << "Empate" << endl;

    if (O<B && O<I) cout << "Otavio" << endl;

    if (B<O && B<I) cout << "Bruno" << endl;

    if (I<O && I<B) cout << "Ian" << endl;

    return 0;
}
