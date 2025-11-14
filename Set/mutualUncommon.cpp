#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<int> n1, n2;
    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        n1.insert(v);
    }
    for (int i = 0; i < m; i++) {
        int v;
        cin >> v;
        n2.insert(v);
    }

    set<int> op;
    set_intersection(n1.begin(), n1.end(),
                     n2.begin(), n2.end(),
                     inserter(op, op.begin()));

    cout << (n - op.size()) * (m - op.size()) << endl;

    return 0;
}
