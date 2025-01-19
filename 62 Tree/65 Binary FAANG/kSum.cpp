#include <bits/stdc++.h>
using namespace std;

// Node structure
struct node {
    int data;
    node* left;
    node* right;

    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution {
public:
    void solve(node* root, int k, int& count, vector<int>& path) {
        // Base case
        if (root == NULL)
            return;

        // Add current node to path
        path.push_back(root->data);

        // Recursive calls for left and right subtrees
        solve(root->left, k, count, path);
        solve(root->right, k, count, path);

        // Check for K-sum paths
        int sum = 0;
        for (int i = path.size() - 1; i >= 0; i--) {
            sum += path[i];
            if (sum == k)
                count++;
        }

        // Backtracking: remove current node from path
        path.pop_back();
    }

    int sumK(node* root, int k) {
        vector<int> path;
        int count = 0;
        solve(root, k, count, path);
        return count;
    }
};