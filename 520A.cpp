#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool alp[26]={false};
    for (int i = 0; i < n; i++)
    {
        char ch= tolower(str[i]);
        if ((ch>='a'&&ch<='z'))
        {
            alp[ch-'a']=true;
        }
    }
    int flag=1;
    for (int i = 0; i < 26; i++)
    {
        if (alp[i]==false)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}