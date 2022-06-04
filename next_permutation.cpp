#include<bits/stdc++.h>
using namespace std;

//using stl functions

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//          next_permutation(nums.begin(),nums.end());
        
//     }
// };



//doing the non-STL way
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n =nums.size();
        int k=0,l;
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
            
        }
        
    }
};
