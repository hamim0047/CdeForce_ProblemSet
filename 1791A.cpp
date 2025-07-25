#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str = "codeforces";
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin>>ch;
        int flag=0;
        for (int j = 0; j < str.length(); j++)
        {
            if (ch==str[j])
            {
                flag=1;
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
    }
    return 0;
}