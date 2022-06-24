#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        int c=0;
        while(c!=k){
            pair<int,int>t=pq.top();
            ans.push_back(t.second);
            pq.pop();
            c++;
        }
        return ans;
        
        
        
    }
};