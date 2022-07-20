#include<bits/stdc++.h>
using namespace std;


  template <typename T>

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };



void solve(BinaryTreeNode<int> *root, int x,int&maxi){
    if(!root)return;
    if(root->data==x){
        maxi=x;
        return;
    }
    if(root->data<x){
        solve(root->right,x,maxi);
    }else if(root->data>x){
        maxi=min(maxi,root->data);
        solve(root->left,x,maxi);
    }
}


int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int maxi=INT_MAX;
    solve(node,x,maxi);
    if(maxi==INT_MAX)return -1;
    return maxi;
}