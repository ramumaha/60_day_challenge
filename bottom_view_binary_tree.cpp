#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
};

class Solution {
  public:
  vector <int> bottomView(Node *root){
      vector<int> ans;
         if(root==NULL)
           return ans;
       
       map<int,int> m;
       queue<pair<Node *,int>> q;
       q.push(make_pair(root,0));
       while(!q.empty())
       {
           pair<Node *,int> temp = q.front();
           q.pop();
           Node *curr = temp.first;
           int hd = temp.second;
           m[hd]=curr->data;
           if(curr->left)
               q.push(make_pair(curr->left,hd-1));
           if(curr->right)
               q.push(make_pair(curr->right,hd+1));
           
       }
       for(auto i: m)
               ans.push_back(i.second);
               return ans;
    }
    
};