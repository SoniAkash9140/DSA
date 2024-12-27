#include<bits/stdc++.h>
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
    bool isIdentical(node* r1, node* r2) {
        // Base cases
        if (r1 == NULL && r2 == NULL) {
            return true;  // Both trees are empty
        }
        if (r1 == NULL || r2 == NULL) {
            return false; // One tree is empty, the other is not
        }

        // Compare the data and recursively check left and right subtrees
        return (r1->data == r2->data) &&
               isIdentical(r1->left, r2->left) &&
               isIdentical(r1->right, r2->right);
    }
};

int main() {
    Solution sol;

    // Tree 1
    node* r1 = new node(1);
    r1->left = new node(2);
    r1->right = new node(3);
    r1->left->left = new node(4);
    r1->left->right = new node(5);

    // Tree 2
    node* r2 = new node(1);
    r2->left = new node(2);
    r2->right = new node(3);
    r2->left->left = new node(4);
    r2->left->right = new node(5);

    // Check if both trees are identical
    cout << "Identical or Not: " << sol.isIdentical(r1, r2) << endl;

    return 0;
}
