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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 || !l2)return NULL;
        int carry=0,sum=0;
        ListNode*temp=new ListNode(0);
        ListNode*x=temp;
        while(l1 || l2 ||carry){
            if(l1){
                sum+=l1->val;
                l1=l1->next;                
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            x->next=new ListNode(sum%10);
            x=x->next;
            sum=carry;
        }
        return temp->next;
        
    }
};