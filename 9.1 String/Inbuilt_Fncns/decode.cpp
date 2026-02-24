#include <bits/stdc++.h>
using namespace std;

string decodedString(string s) {
    string result = "";

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ']') {
            result.push_back(s[i]);
        } else {
            // extract string inside brackets
            string temp = "";
            while (!result.empty() && result.back() != '[') {
                temp.push_back(result.back());
                result.pop_back();
            }

            reverse(temp.begin(), temp.end());

            // remove '['
            result.pop_back();

            // extract number
            string num = "";
            while (!result.empty() && isdigit(result.back())) {
                num.push_back(result.back());
                result.pop_back();
            }

            reverse(num.begin(), num.end());
            int count = stoi(num);

            // repeat substring
            while (count--) {
                result += temp;
            }
        }
    }
    return result;
}

int main() {
    string str;
    cin >> str;

    cout << "Decoded String = " << decodedString(str) << endl;
    return 0;
}