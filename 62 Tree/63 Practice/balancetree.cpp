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
    pair<bool, int> isBalanceFast(node* root){
        if(root==NULL){
            return {true,0};
        }
        pair<bool,int> left=isBalanceFast(root->left);
        pair<bool,int> right=isBalanceFast(root->right);

        bool leftAns=left.first;
        bool rightAns=right.first;
        bool diff=abs(left.second-right.second)<=1;

        pair<bool,int> ans;
        ans.second=max(left.second,right.second)+1;

        if(leftAns && rightAns && diff){
            ans.first=true;
        }
        else{
            ans.first=false;
        }
        return ans;
    }
    bool isBalanced(node* root){
        return isBalanceFast(root).first;
    }
};