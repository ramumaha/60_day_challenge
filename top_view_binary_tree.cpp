#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution
{
    public:
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        map<int, int> m;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            Node* curr = temp.first;
            int hd = temp.second;
            if(m.find(hd) == m.end()){
                m[hd] = curr->data;
            }
            if(curr->left)
            q.push({curr->left, hd-1});
            if(curr->right)
            q.push({curr->right, hd+1});
        }
        
        for(auto i: m){
            ans.push_back(i.second);
        }
        return ans;
    }

};
