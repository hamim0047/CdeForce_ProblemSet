#include<iostream>
#include<string>
using namespace std;

int main(){
    string str,str1;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        bool flag=false;
        if (str[i]>='a'&&str[i]<='z')
        {
            for (int j = 0; j < str1.length(); j++)
            {
                if (str1[j]==str[i])
                {
                    flag=true;
                    break;
                }
            }
            if (!flag)
            {
                str1+=str[i];
            }
            
        }
        
    }
    cout<<str1.length()<<endl;
    return 0;
}