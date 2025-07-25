#include<iostream>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int i=1,index;
    while (1)
    {
        int value=i*k;
        if (value%10==0||value%10==r)
        {
            index=i;
            break;
        }
        i++;
    }
    cout<<index<<endl;
    return 0;
}