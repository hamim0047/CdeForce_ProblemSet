#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    string str;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),:: toupper);
        if (str=="YES")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}