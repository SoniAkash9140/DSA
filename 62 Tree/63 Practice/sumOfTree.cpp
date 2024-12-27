#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int d) {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};

class Solution {
public:
    pair<bool, int> isSumTreeFast(node* root) {
        if (root == NULL) {
            return {true, 0};  // A null node is a sum tree with sum 0
        }

        if (root->left == NULL && root->right == NULL) {
            return {true, root->data};  // Leaf nodes are sum trees with their value
        }

        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);

        bool left = leftAns.first;
        bool right = rightAns.first;

        bool cond = root->data == leftAns.second + rightAns.second;

        pair<bool, int> ans;
        if (left && right && cond) {
            ans.first = true;
            ans.second = root->data + leftAns.second + rightAns.second;  // Return the sum of the current tree
        } else {
            ans.first = false;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    // Check if the tree is a sum tree and print the result
    pair<bool, int> result = sol.isSumTreeFast(root);
    if (result.first) {
        cout << "The tree is a Sum Tree." << endl;
    } else {
        cout << "The tree is NOT a Sum Tree." << endl;
    }

    return 0;
}
