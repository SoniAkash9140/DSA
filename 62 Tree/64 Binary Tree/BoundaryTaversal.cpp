#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data;
    node* left;
    node* right;

    node(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};

class Solution{
    public:
    void traversalLeft(node* root , vector<int> &ans){
        //base case
        if((root==NULL) || (root->left==NULL && root->right==NULL))
        return;

        ans.push_back(root->data);
        if(root->left){
            traversalLeft(root->left,ans);
        }
        else{
             traversalLeft(root->right,ans);
        }
    }

    void TraversalLeaf(node* root , vector<int> &ans){
        //base case
        if(root==NULL)
            return ;
        
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        
        TraversalLeaf(root->left,ans);
        TraversalLeaf(root->right, ans);
    }

    void traversalRight(node* root , vector<int> &ans){
        if((root==NULL) || (root->left==NULL && root->right==NULL)){
            return;
        }

        if(root->right){
            traversalRight(root->right,ans);
        } else{
            traversalRight(root->left, ans);
        }

        //wapas aa gye
        ans.push_back(root->data);
    }

    vector<int> boundary(node* root){
        vector<int> ans;
        if(root==NULL){
            return ans;
        }

        ans.push_back(root->data);

        //left part
        traversalLeft(root->left,ans);

        //leaf part
        //left subtree
        TraversalLeaf(root->left,ans);

        //right subtree
        TraversalLeaf(root->right,ans);

        //right part
        traversalRight(root->right,ans);

        return ans;
    }
};

node* buildTree() {
    int n;
    cin >> n;
    if (n == 0) return NULL;

    queue<node*> q;
    node* root = new node(n);
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        int leftData, rightData;
        cin >> leftData >> rightData;

        if (leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        if (rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

    return root;
}

int main() {
    Solution solution;
    
    node* root = buildTree();
    
    vector<int> ans = solution.boundary(root);
    
    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}