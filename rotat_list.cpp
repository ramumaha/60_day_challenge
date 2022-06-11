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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)return NULL;
        int c=1;
        ListNode*temp=head;
        while(temp->next){
            temp=temp->next;
            c++;
        }
        int rotate=c-(k%c);
        temp->next=head;
        while(rotate--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
        
        
    }
};