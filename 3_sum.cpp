#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int l=i+1,r=n-1;
               if(i>0 && nums[i]==nums[i-1])continue;
            while(l<r){
                if(nums[l]+nums[r]+nums[i]<0){
                    l++;
                }else if(nums[l]+nums[r]+nums[i]>0){
                    r--;
                }else{
                    int x[3]={nums[i],nums[l],nums[r]};
                    ans.push_back({nums[i],nums[l],nums[r]});
                     while(l<r && nums[l]==nums[l+1])l++;
                while(l<r && nums[r]==nums[r-1])r--;
                    l++;
                    r--;
                  
                }
               
            }
        }
        return ans;
    }
};