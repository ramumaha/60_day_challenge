#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            int mid=(l+r)>>1;
            int c=0;
            for(auto &ele:nums){
                if(ele<=mid){
                    c++;
                }
                
            }
            if(c>mid){
                r=mid;
            }else{
                l=mid+1;
            }
            }
        return l;
        
    }
};