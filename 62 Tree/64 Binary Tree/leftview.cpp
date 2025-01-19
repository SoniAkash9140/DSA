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

class Solution {
    public:

    void solve(node* root, vector<int> &ans, int level){
        if(root==NULL)
            return ;
        
        if (level==ans.size())
            ans.push_back(root->data);
        
        solve(root->left , ans , level+1);
        solve(root->right , ans , level+1);
    }
    vector<int> leftView(node* root){
        vector<int> ans;
        solve(root , ans, 0);
        return ans;
    }
};