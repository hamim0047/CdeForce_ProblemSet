#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];   
    }
    int indexMx=0, indexMn=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>arr[indexMx])
        {
            indexMx=i;
        }
        if (arr[i]<=arr[indexMn])
        {
            indexMn=i;
        }
    }
    //cout<<indexMn<<endl;
    int count1= indexMx + (n-1-indexMn);
    if (indexMx>indexMn)
    {
        count1--;
    }
    cout<<count1<<endl;
    return 0;
}