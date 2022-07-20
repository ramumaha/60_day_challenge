#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution
{   
    public:
    void inorder(Node*root,vector<int>&arr){
        if(!root)return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    int kthLargest(Node *root, int k)
    {
        //Your code here
        vector<int>arr;
        inorder(root,arr);
        return arr[arr.size()-k];
    }
};