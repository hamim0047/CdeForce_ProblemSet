#include<iostream>
using namespace std;
int count(int n,int k,int arr[]){
    int x=0;
    int score=arr[k-1];
       for (int i = 0; i < n; i++)
       {
        if (arr[i]>0 && arr[i]>=score)
        {
            x++;
        }
       } 
       return x;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<count(n,k,arr)<<endl;
    return 0;
}