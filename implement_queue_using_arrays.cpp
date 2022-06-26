#include<bits/stdc++.h>
using namespace std;


#include<bits/stdc++.h>
using namespace std;

class Queue {
public:
    list<int>q;
    Queue() {
        
      
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return q.empty();
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        q.push_back(data);
    }

    int dequeue() {
        // Implement the dequeue() function
       if(q.empty())return -1;
        int front=q.front();
        q.pop_front();
        return front;
        
    }

    int front() {
        // Implement the front() function
        return q.empty()?-1:q.front();
    }
};