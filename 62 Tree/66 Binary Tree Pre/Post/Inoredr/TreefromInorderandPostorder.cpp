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

    node* solve(int in[], int post[], int &index, int inOrderStart, int inOrderEnd, int n, map<int, int> &nodeToIndex) {
        if (index < 0 || inOrderStart > inOrderEnd) {
            return NULL;
        }

        // Get the current element from postorder traversal
        int element = post[index--];
        node* root = new node(element);

        // Find the position of the current element in inorder traversal
        int position = nodeToIndex[element];

        // Recursive calls to build left and right subtrees
        root->right = solve(in, post, index, position + 1, inOrderEnd, n, nodeToIndex);
        root->left = solve(in, post, index, inOrderStart, position - 1, n, nodeToIndex);

        return root;
    }

    node* buildTree(int in[], int post[], int n) {
        int postOrderIndex = n - 1;
        map<int, int> nodeToIndex;

        // Create a mapping of node values to their indices in inorder traversal
        createMapping(in, nodeToIndex, n);

        // Build the tree using the helper function
        return solve(in, post, postOrderIndex, 0, n - 1, n, nodeToIndex);
    }
};
