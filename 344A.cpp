#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n];
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (str[i]=="10"&&str[i+1]=="01")
        {
            count++;
        }
        else if (str[i]=="01"&&str[i+1]=="10")
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}