#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int index = -1;
        for (int i = 1; i < n - 1; i++) {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
                index = i + 1; 
                break;
            }
        }
        if (index == -1) {
            if (arr[0] != arr[1]) {
                index = 1;
            } else {
                index = n;
            }
        }

        cout << index << endl;
    }

    return 0;
}
