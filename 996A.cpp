#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while (1)
    {
        if (n>=100)
        {
            count++;
            n-=100;
        }
        else if (n>=20)
        {
            count++;
            n-=20;
        }
        else if (n>=10)
        {
            count++;
            n-=10;
        }
        else if (n>=5)
        {
            count++;
            n-=5;
        }
        else if (n>=1)
        {
            count++;
            n-=1;
        }
        else
        {
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}