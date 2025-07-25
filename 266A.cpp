#include<iostream>
using namespace std;

int main(){
    string str;
    int n;
    cin>>n;
    cin>>str;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (str[i]==str[i+1])
        {
            count++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}