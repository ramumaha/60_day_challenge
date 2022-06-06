#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int mid=n/2;
        for(auto i:mp){
            if(i.second>mid){
                ans=i.first;                
            }
        }
        return ans;
    }
};