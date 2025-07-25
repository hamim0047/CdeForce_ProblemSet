#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 1; i < n; i++)
    {
        cin>>arr[i];
    }
    int x=0;
    int score=arr[k-1];
       for (int i = 1; i <= n; i++)
       {
        if (arr[i]>0 && arr[i]>=score)
        {
            x++;
        }
       } 
    cout<<x<<endl;
    return 0;
}