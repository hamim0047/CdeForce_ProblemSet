#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int M=0,C=0;
    for (int i = 0; i < n; i++)
    {
        int mish,chr;
        cin>>mish>>chr;
        if (mish>chr)
        {
            M++;
        }
        else if (chr>mish)
        {
            C++;
        }
    }
    if (M>C)
    {
        cout<<"Mishka"<<endl;
    }
    else if(C>M)
    {
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}