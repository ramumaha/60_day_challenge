#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return 1;
        int c=1;
        int ans=0;
          sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])continue;
            else if(nums[i]==nums[i-1]+1){
                c++;
            }else{
                ans=max(c,ans);
                c=1;
            }
            
        }
        return max(ans,c);
        
    }
};