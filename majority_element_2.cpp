#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int needed=floor(n/3);
        map<int,int>mp;
        for(auto&i:nums){
            mp[i]++;            
        }
        for(auto&i:mp){
            if(i.second>needed){
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};