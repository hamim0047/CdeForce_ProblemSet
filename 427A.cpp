#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int crime[n];
    int count=0,officer=0;
    for (int i = 0; i < n; i++)
    {
        cin>>crime[i];
        if (crime[i]>0)
        {
            officer+=crime[i];
        }
        if (crime[i]==-1)
        {
            if (officer>0)
            {
                officer--;
            }
            else
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}