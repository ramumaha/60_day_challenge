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
    unordered_map<int,int>mp;
    
    TreeNode*solve(vector<int>&inorder,int inStart,int inEnd,vector<int>&postorder,int poStart,int poEnd){
        if(poEnd<0 || inStart>inEnd)return NULL;
        TreeNode*root=new TreeNode(postorder[poEnd]);
        int rootIndex=mp[postorder[poEnd]];
        int leftEle=rootIndex-inStart;
        root->left=solve(inorder,inStart,rootIndex-1,postorder,poStart,poStart+leftEle-1);
        root->right=solve(inorder,rootIndex+1,inEnd,postorder,poStart+leftEle,poEnd-1);
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return solve(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
        
    }
};