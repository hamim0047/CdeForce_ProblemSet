#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        int a,b;
        cin >> a >> b;
        int temp = abs(b - a);
        int count= (temp+9)/10;
        cout<<count<<endl;
    }
    return 0;
}
