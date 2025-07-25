#include<iostream>
using namespace std;

int main(){
    int n,a,b,index=0;
    cin>>n;
    int count=0;
    int max=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a;
        cin>>b;
        count=count-a+b;
        if (count>max)
        {
            max=count;
        }
    }
    cout<<max<<endl;
    return 0;
}