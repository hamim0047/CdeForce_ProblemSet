#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n=4;
    int arr[n];
    int count=1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i]!=arr[i-1])
        {
            count++;
        }  
    }
    count=4-count;
    cout<<count<<endl;
    return 0;
}