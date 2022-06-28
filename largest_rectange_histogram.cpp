#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        int n=heights.size();
        stack<int>s;
        int ans=0;
        for(int i=0;i<n;i++){
            while(!s.empty() && heights[s.top()]>heights[i]){
                int height=heights[s.top()];
                s.pop();
                int width=s.empty()?-1:s.top();
                ans=max(ans,height*(i-width-1));
            }      
            s.push(i);
        }
        return ans;
    }
};