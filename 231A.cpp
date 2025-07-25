#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[3];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[j];
        }
        int x=0;
        for (int j = 0; j < 3; j++)
        {
            x+=arr[j];
        }
        if (x>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}