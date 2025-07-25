#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<count/3<<endl;
    return 0;
}