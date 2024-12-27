#include <bits/stdc++.h>
using namespace std;

// Define the node structure
struct node {
    int data;
    node* left;
    node* right;

    node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void buildFromLevelOrder(node*& root) {
    queue<node*> q;
    cout << "Enter the data for root: ";
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        // Input left child
        cout << "Enter the left node for " << temp->data << " (-1 for no node): ";
        int leftData;
        cin >> leftData;
        if (leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        // Input right child
        cout << "Enter the right node for " << temp->data << " (-1 for no node): ";
        int rightData;
        cin >> rightData;
        if (rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main() {
    node* root = nullptr; // Declare the root node
    buildFromLevelOrder(root);
    return 0;
}
