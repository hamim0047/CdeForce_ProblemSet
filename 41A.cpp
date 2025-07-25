#include<iostream>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    string rev;
    rev.resize(t.length());
    int j=0;
    for (int i = t.length()-1; i >=0 ; i--)
    {
        rev[j]=t[i];
        j++;
    }
    int flag=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]!=rev[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}