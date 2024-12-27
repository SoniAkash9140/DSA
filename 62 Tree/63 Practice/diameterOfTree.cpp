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
    pair<int ,int> diameterFast(node* root){
        if(root==NULL){
            return {0,0};
        }

        pair<int,int> left=diameterFast(root->left);
        pair<int,int> right=diameterFast(root->right);

        int opt1=left.first; //diameter
        int opt2=right.first;
        int opt3=left.second+right.second+1;

        pair<int,int> ans;
        ans.first=max(opt1,max(opt2,opt3));
        ans.second=max(left.second,right.second)+1;
        return ans;
    }
    int diameter(node* root){
        return diameterFast(root).first;
    }
};