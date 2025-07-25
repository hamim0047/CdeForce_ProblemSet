#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int highest = arr[0], lowest = arr[0], count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
            count++;
        }
        else if (arr[i]<lowest)
        {
            lowest=arr[i];
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}