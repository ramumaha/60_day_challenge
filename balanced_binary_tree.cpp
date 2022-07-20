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
    
    int bal(TreeNode*root){
        if(!root)return 0;
        int l=bal(root->left);
        int r=bal(root->right);
        if(l==-1 || r==-1 || abs(r-l)>1)return -1;
        return 1+max(l,r);
    }
    
    
    
    bool isBalanced(TreeNode* root) {
        int ans=bal(root);
        if(ans==-1)return false;
        return true;
        
    }
};