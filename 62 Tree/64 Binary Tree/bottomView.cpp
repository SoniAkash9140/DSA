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
    vector<int> topView(node* root){
        vector<int> ans;
        if(root==NULL)
            return ans;
        
        map<int,int>topNode;
        queue<pair<node*,int>> q;

        q.push(make_pair(root,0));

        while(!q.empty()){
            pair<node*,int> temp=q.front();
            q.pop();
            node* frontNode=temp.first;
            int hd=temp.second;

            topNode[hd]=frontNode->data;
            
            if(frontNode->left)
                q.push(make_pair(frontNode->left , hd-1));
            if(frontNode->right)
                q.push(make_pair(frontNode->right , hd+1));
        }
        for(auto i:topNode)
            ans.push_back(i.second);
            return ans;
    }
};