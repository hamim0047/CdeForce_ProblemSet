#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO" << endl;
            continue;
        }
        int even = 2, odd = 1;
        int j = 0;
        int arr[n], sumEven = 0;
        while (j < n / 2)
        {
            arr[j] = even;
            sumEven += even;
            even += 2;
            j++;
        }
        int k = (n / 2);
        int sumOdd = 0;
        while (k < n-1)
        {
            arr[k] = odd;
            sumOdd += odd;
            odd += 2;
            k++;
        }
        arr[n - 1] = arr[n / 2 - 1] + (n/2-1);
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}