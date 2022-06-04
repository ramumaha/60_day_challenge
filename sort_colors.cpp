#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>count(3,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        int c=0,temp;
        for(int i=0;i<nums.size();){
            temp=count[c];
            while(temp>0){
                nums[i]=c;
                temp--;
                i++;
            }
            c++;
        }
        
        
    }
};