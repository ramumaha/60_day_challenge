#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxi=0,mini=INT_MAX;
        int n=nums.size();
        if(n==1){
            return 0;
        }
        for(int i=0;i<n;i++){
              mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]-mini);          
            
        }
        return maxi;
        
    }
};