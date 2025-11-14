#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum;
    cin >> n >> sum;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> seen;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int need = sum - arr[i];
        if (seen.count(need)) {
            found = true;
            break;
        }
        seen.insert(arr[i]);
    }

    if (found)
        cout << "True";
    else
        cout << "False";

    return 0;
}
