#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
      ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=head;
        for(int i=0;i<k;i++){
            if(temp==NULL)return head;
            temp=temp->next;
        }
        ListNode*curr,*prev,*next;
        curr=head;
        prev=NULL;
        next=NULL;
        for(int i=0;i<k;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next=reverseKGroup(curr,k);      
        return prev;
        
    }
};