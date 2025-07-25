#include<iostream>
#include<string>
using namespace std;
bool check(int digit){
    string str = to_string(digit);
    int n= str.length();
    for (int i = 0; i < n; i++)
    {
        for (int j =i+1; j < n; j++)
        {
            if (str[i]==str[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main(){
    int digit;
    cin >> digit;
    while (true)
    {
        digit++;
        //cout<<digit<<endl;
        if(check(digit)){
            break;
        }
    }
    cout<<digit<<endl;
    return 0;
}