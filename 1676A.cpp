#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        int sum1=0,sum2=0;
        for (int j = 0; j < 3; j++)
        {
            sum1 += (str[j]-'0');
        }
        for (int k = str.length()-1; k >= (str.length()-3); k--)
        {
            sum2+=(str[k]-'0');
        }
        if (sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}