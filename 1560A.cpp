#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        int count = 0, cur = 1;
        while (1)
        {
            if (cur % 3 != 0 && cur % 10 != 3)
            {
                count++;
                if (count == k)
                {
                    cout << cur << endl;
                    break;
                }
            }
            cur++;
        }
    }
    return 0;
}