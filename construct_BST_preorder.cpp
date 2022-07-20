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
    
    TreeNode*solve(vector<int>&preorder,int preStart,int preEnd){
        if(preStart>preEnd || preStart<0 || preEnd<0)return NULL;
        TreeNode*root=new TreeNode(preorder[preStart]);
        int index=-1;
        for(int i=preStart;i<=preEnd;i++){
            if(preorder[preStart]<preorder[i]){
                index=i;
                break;
            }
        }
        if(index==-1){
            root->left=solve(preorder,preStart+1,preEnd);
            root->right=NULL;
        }else{
        root->left=solve(preorder,preStart+1,index-1);
        root->right=solve(preorder,index,preEnd);}
        return root;
        
        
    }
    
    
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return solve(preorder,0,preorder.size()-1);
        
    }
};