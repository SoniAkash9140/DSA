#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n), b(n), merged;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int i = 0, j = 0;

    while (i < n && j < n)
    {
        if (a[i] < b[j])
            merged.push_back(a[i++]);
        else
            merged.push_back(b[j++]);
    }

    while (i < n)
        merged.push_back(a[i++]);

    while (j < n)
        merged.push_back(b[j++]);

    cout << merged[n - 1] + merged[n];

    return 0;
}
