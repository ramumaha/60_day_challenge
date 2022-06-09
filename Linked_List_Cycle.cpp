#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*fast,*slow;
          if(!head || !head->next)return false;
        fast=head->next,slow=head;
      
        while(fast->next && fast->next->next){
            if(fast==slow)return true;
            fast=fast->next->next;
            slow=slow->next;
        }
        return false;
        
    }
};