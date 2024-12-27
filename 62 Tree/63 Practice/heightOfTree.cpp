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
    int height(node* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);

        return max(left,right)+1;
    }
};

int main(){
    Solution sol;
    node* root=new node(1);
    root->left=new node(2);
    root->right =new node(3);
    root->left->left =new node(4);
    root->left->right =new node(5);

    cout << "Height of the tree:" << sol.height(root) << endl;
    return 0;
}