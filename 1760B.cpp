#include<iostream>
using namespace std;

int main(){
    string str;
    int t,n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>str;
        char ch = str[0];
        for (int j = 0; j < n; j++)
        {
            if (ch<str[j])
            {
                ch=str[j];
            }
        }
        cout<<(int)ch-97+1<<endl;
    }
    return 0;
}