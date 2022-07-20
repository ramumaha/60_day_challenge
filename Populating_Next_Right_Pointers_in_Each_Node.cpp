#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return NULL;
        auto l=root->left,r=root->right,n=root->next;
        if(l){
            l->next=r;
            if(n){
                r->next=n->left;
            }
            connect(l);
            connect(r);
        }
        return root;
        
    }
};