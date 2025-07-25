#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
        if (str[i]=="Tetrahedron")
        {
            count+=4;
        }
        else if (str[i]=="Cube")
        {
            count+=6;
        }
        else if (str[i]=="Octahedron")
        {
            count+=8;
        }
        else if (str[i]=="Dodecahedron")
        {
            count+=12;
        }
        else if (str[i]=="Icosahedron")
        {
            count+=20;
        }
    }
    cout<<count<<endl;
    return 0;
}