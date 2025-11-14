#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, len;
    cin >> n >> len;

    vector<set<int>> lSet;

    // Read n arrays, each of length len
    for (int i = 0; i < n; i++) {
        set<int> s;
        for (int j = 0; j < len; j++) {
            int val;
            cin >> val;
            s.insert(val);
        }
        lSet.push_back(s);
    }

    // Start with the first set
    set<int> common = lSet[0];

    // Retain only elements common to all sets
    for (int i = 1; i < n; i++) {
        set<int> temp;
        set_intersection(common.begin(), common.end(),
                         lSet[i].begin(), lSet[i].end(),
                         inserter(temp, temp.begin()));
        common = temp;
    }

    // Print the common elements in ascending order
    for (int val : common) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
