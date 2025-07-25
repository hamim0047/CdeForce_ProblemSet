#include<iostream>
using namespace std;
bool comp(int a, int b){
    return a>b;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    //sort(arr,arr+n,comp);
    int sereja=0,dima=0,k=0,l=n-1;
    bool turn=true;
    while (k<=l)
    {
        if (arr[k]<arr[l])
        {
            if (turn)
            {
                sereja+=arr[l];
            }
            else
            {
                dima+=arr[l];
            }
            l--;
        }
        else
        {
            if (turn)
            {
                sereja+=arr[k];
            }
            else
            {
                dima+=arr[k];
            }
            k++;
        }
        turn= !turn;
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}