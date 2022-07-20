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
     bool isValidBST(TreeNode* root) {
        return isValid(root,NULL,NULL);
    }
    
    bool isValid(TreeNode*root,TreeNode*minNode,TreeNode*maxNode){
        if(!root){
            return true;
        }
        if((minNode&& minNode->val>=root->val) || (maxNode && maxNode->val<=root->val))
            return false;
        return isValid(root->left,minNode,root) && isValid(root->right,root,maxNode);
    }
};