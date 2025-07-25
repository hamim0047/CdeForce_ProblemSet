#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int x=0;
    for (int i = 0; i <= w; i++)
    {
        x+=i*k;
    }
    if (x>n)
    {
        cout<<x-n<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    return 0;
}