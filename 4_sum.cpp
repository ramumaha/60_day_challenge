#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int target2=target-nums[i]-nums[j];
                int front=j+1,back=nums.size()-1;
                while(front<back){
                    int two_sum=nums[front]+nums[back];
                    if(two_sum>target2){
                        back--;
                    }else if(two_sum<target2){
                        front++;
                    }else{
                        ans.push_back({nums[i],nums[j],nums[front],nums[back]});
                         vector<int>quad={
                            nums[i],
                            nums[j],
                            nums[front],
                            nums[back]
                        };
                        while(front<back && nums[front]==quad[2])front++;
                        while(front<back && nums[back]==quad[3])back--;
                    }
                    while(i<nums.size()-1 && nums[i]==nums[i+1])i++;
                    while(j<nums.size()-1 && nums[j]==nums[j+1])j++;
                }
            }
        }
        return ans;
        
    }
};