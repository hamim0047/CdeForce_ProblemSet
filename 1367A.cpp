#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        string str2;
        for (int j = 0; j < str.length(); j+=2)
        {
            str2+=str[j];
        }
        str2+=str[str.length()-1];
        cout<<str2<<endl;
    }
    return 0;
}