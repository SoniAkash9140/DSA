#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (Y >= X) {
        cout << Y - X << endl;
    } else {
        int diff = X - Y;

        if (diff % 2 == 0)
            cout << diff / 2 << endl;
        else
            cout << diff / 2 + 2 << endl;
    }

    return 0;
}