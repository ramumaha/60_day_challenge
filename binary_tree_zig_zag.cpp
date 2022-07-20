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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool left=true;
        while(!q.empty()){
            int sz=q.size();
            vector<int>t(sz);
            for(int i=0;i<sz;i++){
                TreeNode*temp=q.front();
                q.pop();
               int index=left?i:sz-i-1;
                t[index]=temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                
                }
              left=!left;
            ans.push_back(t);
            }
          
            
        
        return ans;
        
    }
};