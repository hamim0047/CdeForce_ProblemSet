#include<iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i+1; j < str.length(); j++)
        {
            if (str[i]==str[j])
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    if ((str.length()-count)%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}