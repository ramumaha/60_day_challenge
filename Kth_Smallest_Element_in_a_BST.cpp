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
    vector<int>arr;
    void inorder(TreeNode*root){
        if(!root)return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        if(k>arr.size())return -1;
        return arr[k-1];
        
    }
};