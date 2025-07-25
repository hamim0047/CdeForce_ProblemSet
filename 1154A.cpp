#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>x[i];
    }
    sort(x,x+4);
    int c= x[3]-x[0];
    int b= x[2]-c;
    int a= x[0]-b;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}