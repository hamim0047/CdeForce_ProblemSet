#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        int x=str.length();
        if (x>10)
        {
            int p=x-2;
            cout<<str[0]<<p<<str[str.length()-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
        
    }
    return 0;
}