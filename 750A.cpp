#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int minutes=0,count=0;
    for (int i = 1; i <= n; i++)
    { 
        minutes+=5*(i);
        if ((minutes+k)>240)
        {
            break;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}