#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int arr[100];
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isdigit(str[i]))
        {
            arr[count++]=str[i]-'0';
        }
    }
    sort(arr,arr+count);
    for (int i = 0; i < count; i++)
    {
        cout<<arr[i];
        if (i!=count-1)
        {
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}