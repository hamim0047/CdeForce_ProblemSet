#include<iostream>
#include<string>
using namespace std;

int main(){
    long long num;
    cin>>num;
    string str = to_string(num);
    //cout<<str<<endl;
    int count=0;
    int flag=1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]=='4'||str[i]=='7')
        {
            count++;
        }
    }
    string count_str= to_string(count);
    for (int i = 0; i < count_str.length(); i++)
    {
        if (count_str[i]!='4'&&count_str[i]!='7')
        {
            flag=0;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
