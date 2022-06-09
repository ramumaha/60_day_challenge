#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
     int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*a=headA,*b=headB;
        while(a!=b){
            a=(a)?a->next:headA;
            b=(b)?b->next:headB;
        }
        return a;
        
    }
};