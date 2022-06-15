#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    vector<int>num1;
    
    void dfs(int index){
        ans.push_back(temp);
        for(int i=index;i<num1.size();i++){
            if(i>index && num1[i]==num1[i-1]){
                continue;
            }
            temp.push_back(num1[i]);
            dfs(i+1);
            temp.pop_back();
        }
    }
    
    
    
    
    
    
    
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        num1=nums;
        dfs(0);
        return ans;
        
    }
};