#include<bits/stdc++.h>
using namespace std;

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };


#include<bits/stdc++.h>
using namespace std;


void solve(TreeNode<int> * root, int x,int &maxi){
   if(!root)return;
    if(root->val==x){
        maxi=x;
        return;
    }
    if(root->val>x){
        solve(root->left,x,maxi);
    }else if(root->val<x){
        maxi=max(root->val,maxi);
        solve(root->right,x,maxi);
    }
}




int floorInBST(TreeNode<int> * root, int X)
{
    
    int maxi=INT_MIN;
     solve(root,X,maxi);
    return maxi;
  
    
    
}