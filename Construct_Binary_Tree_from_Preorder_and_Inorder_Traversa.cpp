#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    map<int,int>mp;
    
    TreeNode*solve(vector<int>&preorder,int preStart,int preEnd,vector<int>&inorder,int inStart,int inEnd){
        if(preStart>preEnd || inStart>inEnd)return NULL;
        TreeNode*root=new TreeNode(preorder[preStart]);
        int inIndex=mp[preorder[preStart]];
        int numsLeft=inIndex-inStart;
        root->left=solve(preorder,preStart+1,preStart+numsLeft,inorder,inStart,inIndex-1);
        root->right=solve(preorder,preStart+numsLeft+1,preEnd,inorder,inIndex+1,inEnd);
        return root;
    }
    
    
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
          ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        // map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return solve(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
        
    }
};