#include<bits/stdc++.h>
using namespace std;
class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int c=1;
        while(st.size() && st.top().first<=price){
            c+=st.top().second;
            st.pop();
        }
        st.push({price,c});
        return c;
        
    }
    
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */