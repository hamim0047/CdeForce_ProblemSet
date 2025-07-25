#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int diff=0,same=0;
    if (a>=b)
    {
        diff=b;
        a=a-b;
        same=a/2;
    }
    else
    {
        diff=a;
        b=b-a;
        same=b/2;
    }
    cout<<diff<<" "<<same<<endl;
    return 0;
}