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
    int depth(TreeNode*root){
        if(!root)return 0;
        return 1+max(depth(root->left),depth(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int dr=depth(root->right);
        int dl=depth(root->left);
        int drr=diameterOfBinaryTree(root->right);
        int dll=diameterOfBinaryTree(root->left);
        return max(dr+dl,max(drr,dll));
        
        
        
        
    }
};