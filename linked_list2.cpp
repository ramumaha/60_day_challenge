#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    
    int detect(ListNode*head){
         if(!head || !head->next)return 0;
        ListNode*fast,*slow;
        slow=head,fast=head->next;
        while(fast->next && fast->next->next){
            if(fast==slow)return 1;
            slow=slow->next;
            fast=fast->next->next;
        }
        return 0;
        
    }
    ListNode *detectCycle(ListNode *head) {
        int present=detect(head);
        if(!present)return NULL;
        map<ListNode*,int>mp;
        while(head){
            if(mp.find(head)!=mp.end()){
                return head;
            }else{
                mp[head]=1;
            }
            head=head->next;
        }
        
        return NULL;
       
        
        
    }
};