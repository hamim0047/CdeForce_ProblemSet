#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    string Com=str1+str2;
    sort(str3.begin(),str3.end());
    sort(Com.begin(),Com.end());
    if (Com==str3)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}