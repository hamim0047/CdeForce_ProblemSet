#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        if (str == "abc" || str == "bac" || str == "acb"||str=="cba")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}