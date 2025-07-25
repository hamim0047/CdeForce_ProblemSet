#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string ch[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ch[i];
    }
    int x=0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i]=="++X"||ch[i]=="X++")
        {
            ++x;
        }
        else if (ch[i]=="--X"||ch[i]=="X--")
        {
            --x;
        }
    }
    cout<<x<<endl;
    return 0;
}