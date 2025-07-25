#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x[3];
    int dis=0;
    for (int i = 0; i < 3; i++)
    {
        cin>>x[i];
    }
    sort(x,x+3);
    int mid=x[1];
    dis= (mid-x[0])+(x[2]-mid);
    cout<<dis<<endl;
    return 0;
}