#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data ;
        node* left;
        node* right;
    
    node(int d ){
        this -> data = d ;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout << "Enter the data for inserting in left of " << data << endl;
    root->left=buildTree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;
    root->left=buildTree(root->right);
    return root ;
}

void inorder(node* root){
    //base case
    if(root == NULL){
        return ;
    }
    inorder (root->left);
    cout<< root->data << " ";
    inorder (root -> right);
}

void preOrder(node* root){
    if(root==NULL){
        return ;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postorder(node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main(){
    node* root = NULL;
    //1 3 7 -1 -1 11 -1 -1 17 -1 -1 -1

    //creting a tree
    root=buildTree(root);

    cout << "inorder traversal is:" ;
    inorder(root);

    cout << "preorder transversal is :" ;
    preOrder(root);

    cout << "postorder transversal is :" ;
    postorder(root);

    return 0;
}