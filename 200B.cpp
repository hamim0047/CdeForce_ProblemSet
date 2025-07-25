#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    long double avg ,sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>p;
        sum+=p;
    }
    avg = sum/n;
    cout<<fixed<<setprecision(12)<<avg<<endl;
    return 0;
}