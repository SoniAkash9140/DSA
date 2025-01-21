#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val; // Corrected initialization
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    void createMapping(int in[], map<int, int> &nodeToIndex, int n) {
        for (int i = 0; i < n; i++) {
            nodeToIndex[in[i]] = i;
        }
    }

    node* solve(int in[], int pre[], int &index, int inOrderStart, int inOrderEnd, int n, map<int, int> &nodeToIndex) {
        if (index >= n || inOrderStart > inOrderEnd) {
            return NULL;
        }

        // Get the current element from preorder traversal
        int element = pre[index++];
        node* root = new node(element);

        // Find the position of the current element in inorder traversal
        int position = nodeToIndex[element];

        // Recursive calls to build left and right subtrees
        root->left = solve(in, pre, index, inOrderStart, position - 1, n, nodeToIndex);
        root->right = solve(in, pre, index, position + 1, inOrderEnd, n, nodeToIndex);

        return root;
    }

    node* buildTree(int in[], int pre[], int n) {
        int preOrderIndex = 0;
        map<int, int> nodeToIndex;

        // Create a mapping of node values to their indices in inorder traversal
        createMapping(in, nodeToIndex, n);

        // Build the tree using the helper function
        return solve(in, pre, preOrderIndex, 0, n - 1, n, nodeToIndex);
    }
};
