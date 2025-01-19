// Lowest Common Ancestor

#include<bits/stdc++.h>
using namespace std ;
struct node{
    int data ;
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
    node* lca(node* root, int n1, int n2){
        if(root==NULL){
            return NULL;
        }
        if(root->data==n1 || root->data==n2){
            return root;
        }
        node* leftAns=lca(root->left,n1,n2);
        node* rightAns=lca(root->right, n1,n2);

        if(leftAns!=NULL && rightAns!=NULL){
            return root;
        } else if (leftAns!=NULL && rightAns==NULL){
            return leftAns;
        }
        else if (leftAns==NULL && rightAns!=NULL){
            return rightAns;
        }
        else{
            return NULL;
        }
    }
};