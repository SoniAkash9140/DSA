#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
public:
    vector<int> zigZagTraversal(Node* root) {
        vector<int> result;
        if (root == NULL) {
            return result;
        }

        queue<Node*> q;
        q.push(root);

        bool leftToRight = true;
        while (!q.empty()) {
            int size = q.size();
            vector<int> ans(size);
            for (int i = 0; i < size; i++) {
                Node* frontNode = q.front();
                q.pop();

                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode->data;

                if (frontNode->left) {
                    q.push(frontNode->left);
                }
                if (frontNode->right) {
                    q.push(frontNode->right);
                }
            }
            leftToRight = !leftToRight;
            for (auto i : ans) {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main() {
    Solution sol;  // Corrected from 'sol Solution' to 'Solution sol'
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Correcting the output printing logic
    cout << "Zig Zag Traversal: ";
    vector<int> result = sol.zigZagTraversal(root);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
