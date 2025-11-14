#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);  // insert each element into the set
    }

    // print the sorted unique elements
    for (auto x : s) {
        cout << x << " ";
    }

    return 0;
}
