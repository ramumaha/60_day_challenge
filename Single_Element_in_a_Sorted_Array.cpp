#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(l+r)>>1;
            int adj=(mid%2==0)?mid+1:mid-1;
            if(nums[mid]==nums[adj]){
                l=mid+1;
            }else{
                r=mid;
            }
        }
        return nums[l];
        
        
    }
};