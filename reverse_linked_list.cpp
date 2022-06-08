#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

//iterative solution

class Solution {
public:

  ListNode* reverseList(ListNode* head) {
      ListNode*curr,*next,*prev;
      curr=head;

      while(curr!=NULL){
          next=curr->next;
          curr->next=prev;
          curr=prev;
          prev=curr;
      }
      return prev;
}

};

//recursive solution


class Soln{
  public:
  ListNode* reverseList(ListNode* head){
    if(!head || !head->next)return head;
    ListNode* reversedHead=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return reversedHead;

  }

};