#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n, count[t];
    for (int i = 0; i < t ; i++)
    {
        cin>>n;
        count[i]=(n-1)/2;
    }
    for (int i = 0; i < t; i++)
    {
        cout<<count[i]<<endl;
    }
    return 0;
}