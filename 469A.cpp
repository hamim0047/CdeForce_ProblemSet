#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p,q,x,y;
    cin>>p;
    int arr[n];
    for (int i = 1; i <= p; i++)
    {
        cin>>x;
        arr[x]=x;
    }
    cin>>q;
    for (int i = 1; i <= q; i++)
    {
        cin>>y;
        arr[y]=y;
    }
    int flag=1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i]!=i)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        cout<<"I become the guy."<<endl;
    }
    else
    {
        cout<<"Oh, my keyboard!"<<endl;
    }
    return 0;
}