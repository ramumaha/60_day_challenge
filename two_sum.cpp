#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end() && i!=mp[rem]){
                ans.push_back(i);
                ans.push_back(mp[rem]);
                break;
                
            }else{
                mp[nums[i]]=i;
            }
        }
        return ans;
        
    }
};