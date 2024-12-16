#include<iostream>
using namespace std;

int main() {
    int n, s;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the target sum (s): ";
    cin >> s;

    int arr[n];

    // Input the elements of the array
    cout << "Enter " << n << " elements for arr: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find pairs whose sum equals s
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Loop starts from i+1 to avoid duplicate pairs
            if (arr[i] + arr[j] == s) {
                cout << "Pair: (" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}
