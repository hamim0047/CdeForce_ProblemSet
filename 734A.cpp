#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,d=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if (a<d)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}