#include<iostream>
using namespace std;

int main(){
    int h,n;
    cin>>n>>h;
    int width=0;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
        if (A[i]>h)
        {
            width+=2;
        }
        else
        {
            width+=1;
        }
    }
    cout<< width <<endl;
    return 0;
}