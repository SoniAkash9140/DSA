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
    void solve(node* root, int sum , int &maxSum , int len , int &maxLen){
         if(root==NULL){
            if(len>maxLen){
                maxLen=len;
                maxSum=sum;
            } else{
                maxSum=max(sum,maxSum);
            }
            return ;
         }
         sum+=root->data;

         solve(root->left, sum , maxSum, len, maxLen);
         solve(root->right, sum , maxSum, len, maxLen);
    }

    int sumOfLargest(node* root){ 
        int len=0;
        int maxLen=0;
        int sum=0;
        int maxSum=INT_MIN;

        solve(root, sum , maxSum, len, maxLen);

        return maxSum;
    }
};