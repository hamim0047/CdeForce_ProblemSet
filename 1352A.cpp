#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    for (int i = 0; i < n; i++)
    {
        int num= stoi(str[i]);
        int m= str[i].length()-1;
        int j=0, arr[10],count=0;
        for (int j = 0; j < str[i].length(); j++)
        {
            int power= pow(10,m-j);
            int digit= num/power;
            if (digit!=0)
            {
                arr[count++]=digit*power;
            }
            num-=digit*power;
        }
        
        cout<<count<<endl;
        for (int k = 0; k < count; k++)
        {
            cout<<arr[k];
            if (k!=count-1)
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}