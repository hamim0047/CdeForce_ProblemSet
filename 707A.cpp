#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    char ch[row][col];
    int flag=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>ch[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (ch[i][j]=='C'||ch[i][j]=='M'||ch[i][j]=='Y')
            {
                flag=1;
                break;
            }
            
        }
    }
    if (flag==0)
    {
        cout<<"#Black&White"<<endl;
    }
    else{
        cout<<"#Color"<<endl;
    }
    return 0;
}