#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    int count=0;
    int p=0,q=0,r=0;
    int programmer[n],sports[n],math[n];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i]==1)
        {
            p++;
            programmer[p]=i;
        }
        else if (arr[i]==2)
        {
            q++;
            math[q]=i;
        }
        else if (arr[i]==3)
        {
            r++;
            sports[r]=i;
        }
    }
    count= min(p,min(q,r));
    cout<<count<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<programmer[p-i]<<" "<<math[q-i]<<" "<<sports[r-i]<<endl;
    }
    return 0;
}