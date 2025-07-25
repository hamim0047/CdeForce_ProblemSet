#include<iostream>
using namespace std;

int main(){
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string str;
    cin>>str;
    int result=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='1')
        {
            result+=a1;
        }
        else if (str[i]=='2')
        {
            result+=a2;
        }
        else if (str[i]=='3')
        {
            result+=a3;
        }
        else
        {
            result+=a4;
        }
    }
    cout<<result<<endl;
    return 0;
}