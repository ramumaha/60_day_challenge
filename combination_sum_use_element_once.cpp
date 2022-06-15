#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    vector<int>num1;
    
    void dfs(int index,int target){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<num1.size() && target>=num1[i];i++){
            if(i>index &&  num1[i]==num1[i-1])continue;
            temp.push_back(num1[i]);
            dfs(i+1,target-num1[i]);
            temp.pop_back();
            
        }
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        num1=nums;
        dfs(0,target);
        return ans;
        
    }
};