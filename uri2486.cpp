#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int i, N, T, C;
    char food[100];

    while (cin>>T){
        C = 0;
        if (T==0)   break;
        else{
            for (i=1; i<=T; i++){
                cin >> N;
                cin.ignore();
                gets(food);
                if (strcmp(food, "suco de laranja")==0){
                    C += N*120;
                }
                if (strcmp(food, "morango fresco")==0){
                    C += N*85;
                }
                if (strcmp(food, "mamao")==0){
                    C += N*85;
                }
                if (strcmp(food, "goiaba vermelha")==0){
                    C += N*70;
                }
                if (strcmp(food, "manga")==0){
                    C += N*56;
                }
                if (strcmp(food, "laranja")==0){
                    C += N*50;
                }
                if (strcmp(food, "brocolis")==0){
                    C += N*34;
                }
            }
            if (C>=110 && C<=130){
                cout << C << " mg" << endl;
            }
            else{
                if (C<110){
                    C = 110-C;
                    cout << "Mais " << C << " mg" << endl;
                }
                else{
                    C = C-130;
                    cout << "Menos "<< C << " mg" << endl;
                }
            }
        }
    }
    return 0;
}
