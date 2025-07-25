#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int totalsize= m*n;
    if (n>=m&&n<=16)
    {
        cout<<totalsize/2<<endl;
    }
    else
    {
        cout<<"overlapped"<<endl;
    }
    return 0;
}