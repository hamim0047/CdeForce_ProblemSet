#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int slice=c*d, total_drink= k*l, toast;
    int drink_toast= total_drink/nl;
    int salt= p/np;
    toast= min(drink_toast,min(slice,salt))/n;
    cout<<toast<<endl;
    return 0;
}