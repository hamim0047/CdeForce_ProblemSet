#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    string str="codeforces";
    for (int i = 0; i < t; i++)
    {
        string s;
        cin>>s;
        int count=0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j]!=str[j])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}