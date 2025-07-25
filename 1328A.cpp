#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int arr[n];
    int a,b;
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        if (a%b!=0)
        {
            int x = a%b;
            arr[i]= b-x;
        }
        else
        {
            arr[i]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}