#include<iostream>
using namespace std;

int main(){
    int Limak,Bob;
    cin>>Limak>>Bob;
    int i=0;
    while (1)
    {
        i++;
        Limak*=3;
        Bob*=2;
        if (Limak>Bob)
        {
            break;
        }
    }
    cout<<i<<endl;
    return 0;
}