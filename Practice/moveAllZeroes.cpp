#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            ans.push_back(arr[i]);
    }
    while (ans.size() < n)
        ans.push_back(0);

    for (int value : ans)
        cout << value << ' ';
    cout << endl;
    return 0;
}