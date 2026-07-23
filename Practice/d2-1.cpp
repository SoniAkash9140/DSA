#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    // Check length
    if (S.length() != 5 || T.length() != 5) {
        cout << "Invalid Input";
        return 0;
    }

    // Check uppercase letters
    for (char c : S) {
        if (!isupper(c)) {
            cout << "Invalid Input";
            return 0;
        }
    }

    for (char c : T) {
        if (!isupper(c)) {
            cout << "Invalid Input";
            return 0;
        }
    }

    // Compare characters
    for (int i = 0; i < 5; i++) {
        if (S[i] == T[i])
            cout << "Green" << endl;
        else
            cout << "Black" << endl;
    }

    return 0;
}