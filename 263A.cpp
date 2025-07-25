#include<iostream>
using namespace std;

int main(){
    int arr[5][5];
    int count=0;
    int row,col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int  i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }
    int r=row-2;
    int c=col-2;
    if (r<0)
    {
        r= -r;
    }
    if (c<0)
    {
        c=-c;
    }
    count=r+c;
    cout<<count<<endl;
    return 0;
}