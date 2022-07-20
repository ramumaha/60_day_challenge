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
    vector<int>tree;
    void solve(TreeNode*root){
        if(!root)return;
        solve(root->left);
        tree.push_back(root->val);
        solve(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        solve(root);
        for(int i=0;i<tree.size();i++){
            int t=k-tree[i];
            auto itr=find(tree.begin(),tree.end(),t);
            if(itr!=tree.end() && itr-tree.begin()!=i)return true;
        }
        return false;
        
        
    }
};