#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(arr,arr+n);
        int flag = 1;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i+1] - arr[i] > 1)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
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