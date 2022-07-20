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
    int maxi=INT_MIN;
    int solve(TreeNode*root){
         if(!root)return 0;
        int l=max(solve(root->left),0);
        int r=max(solve(root->right),0);
        int temp=root->val+l+r;
        int t=max(l,r)+root->val;
        maxi=max(maxi,l+r+root->val);
        return max(l,r)+root->val;
        
        
        
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxi;
        
       
        
        
    }
};