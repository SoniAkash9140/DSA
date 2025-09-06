#include <bits/stdc++.h>
using namespace std;

// Function to wave print
void wavePrint(vector<vector<int>>& arr, int n, int m) {
    for (int col = 0; col < m; col++) {
        if (col % 2 == 0) {
            // top to bottom
            for (int row = 0; row < n; row++) {
                cout << arr[row][col] << " ";
            }
        } else {
            // bottom to top
            for (int row = n - 1; row >= 0; row--) {
                cout << arr[row][col] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Wave Print: " << endl;
    wavePrint(arr, n, m);  

    return 0;
}
