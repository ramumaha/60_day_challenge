#include <bits/stdc++.h>

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};

using namespace std;

void printList(Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
}

Node* flatten (Node* root);

int main(void) {

	int t;
	cin>>t;
	while(t--){
    int n,m,flag=1,flag1=1;
    struct Node * temp=NULL;
	struct Node * head=NULL;
	struct Node * pre=NULL;
	struct Node * tempB=NULL;
	struct Node * preB=NULL;
		cin>>n;
        int work[n];
		for(int i=0;i<n;i++)
            cin>>work[i];
		for(int i=0;i<n;i++){
			m=work[i];
			--m;
			int data;
			scanf("%d",&data);
			temp = new Node(data);
			temp->next = NULL;
			temp->bottom = NULL;
			
			if(flag){
				head = temp;
				pre = temp;
				flag = 0;
				flag1 = 1;
			}
			else{
				pre->next = temp;
				pre = temp;
				flag1 = 1;
			}
			for(int j=0;j<m;j++){
				
				int temp_data;
				scanf("%d",&temp_data);
				tempB = new Node(temp_data);

				if(flag1){
					temp->bottom=tempB;
					preB=tempB;
					flag1=0;
				}
				else{
					preB->bottom=tempB;
					preB=tempB;
				}
			}
		}
		   Node *fun = head;
		   Node *fun2=head;

            Node* root = flatten(head);
            printList(root);
            cout<<endl;

	}
	return 0;
}




struct Node* sortedMerge(struct Node* a, struct Node* b)
{
   
    if (a == NULL) {
        return b;
    }
 
    else if (b == NULL) {
        return a;
    }
 
    struct Node* result = NULL;
    if (a->data <= b->data)
    {
        result = a;
        result->bottom = sortedMerge(a->bottom, b);
    }
    else {
        result = b;
        result->bottom = sortedMerge(a, b->bottom);
    }
 
    return result;
}

void frontBackSplit(struct Node* source, struct Node** frontRef,
                    struct Node** backRef)
{    if (source == NULL || source->bottom == NULL)
    {
        *frontRef = source;
        *backRef = NULL;
        return;
    }
 
    struct Node* slow = source;
    struct Node* fast = source->bottom;
    while (fast != NULL)
    {
        fast = fast->bottom;
        if (fast != NULL)
        {
            slow = slow->bottom;
            fast = fast->bottom;
        }
    }
    *frontRef = source;
    *backRef = slow->bottom;
    slow->bottom = NULL;
}

void mergesort(struct Node** headRef)
{
    
    if (*headRef == NULL || (*headRef)->bottom == NULL) {
        return;
    }
 
    struct Node *a, *b;
    frontBackSplit(*headRef, &a, &b);
    mergesort(&a);
    mergesort(&b);
    *headRef = sortedMerge(a, b);
    (*headRef)->next = NULL;
}
 
Node *flatten(Node *root)
{
    struct Node* curr = root;
 
    while (curr != NULL)
    {
        struct Node* temp = curr;
        while (temp->bottom != NULL) {
            temp = temp->bottom;
        }
        temp->bottom = curr->next;
        curr = curr->next;
    }
    mergesort(&root);
    return root;
}



