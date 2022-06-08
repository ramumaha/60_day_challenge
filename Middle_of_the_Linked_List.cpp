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
    ListNode* middleNode(ListNode* head) {
        ListNode*temp=head;
        int len=0;
        while(temp){
            len++;
            temp=temp->next;
        }
        len/=2;
        temp=head;
        while(len>0){
            temp=temp->next;
            len--;
        }
        return temp;
        
    }
};