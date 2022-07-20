#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution {
public:

    void morris(Node*root,vector<int>&ans){
        if(root==NULL)return;
        Node*current=root;
        Node*pre;
        while(current!=NULL){
            if(!current->left){
                ans.push_back(current->data);
                current=current->right;
            }else{
                pre=current->left;
                while(pre->right!=NULL && pre->right!=current){
                    pre=pre->right;
                }
                if (pre->right == NULL) {
                pre->right = current;
                current = current->left;
            }else{
                    pre->right=NULL;
                    ans.push_back(current->data);
                    current=current->right;
                }
                
                
            }
        }
    }




    vector<int> inOrder(Node* root)
    {
        vector<int>ans;
        if(!root)return ans;
        morris(root,ans);
        return ans;
    }
};
