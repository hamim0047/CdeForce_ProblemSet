#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    int y,w;
    cin>>y>>w;
    int m= max(y,w);
    int g = gcd(7-m,6);
    cout<<(7-m)/g<<"/"<<6/g<<endl;
    return 0;
}
