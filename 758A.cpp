#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count=arr[0];
    int total=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>count)
        {
            count=arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        total+=(count-arr[i]);
    }
    
    cout<<total<<endl;
    return 0;
}
