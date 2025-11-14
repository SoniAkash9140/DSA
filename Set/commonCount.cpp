#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    set<char> ss1, ss2;
    for (int i = 0; i < s1.size(); i++) {
        ss1.insert(s1[i]);
    }
    for (int i = 0; i < s2.size(); i++) {
        ss2.insert(s2[i]);
    }

    set<char> op;
    set_intersection(ss1.begin(), ss1.end(),
                     ss2.begin(), ss2.end(),
                     inserter(op, op.begin()));

    cout << op.size() << endl;  // number of common characters

    return 0;
}
