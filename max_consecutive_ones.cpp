#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int c=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
               maxi=max(maxi,++c);
           }else{
               c=0;
           }
       }
        return maxi;
        
    }
};