#include<iostream>
using namespace std;

int main(){
    string str1, str2;
    cin>>str1>>str2;
    int n= str1.length();
    string str3[n];
    for (int i = 0; i < n ; i++)
    {
        if (str1[i]!=str2[i])
        {
            str3[i]="1";
        }
        else
        {
            str3[i]="0";
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<str3[i];
    }
    cout<<endl;
    return 0;
}
