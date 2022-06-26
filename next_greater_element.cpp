#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
      vector<int>ans(n,-1);
        map<int,int>mp;
        stack<int>s;
        for(auto&n:nums2){
            while(!s.empty() && s.top()<n){
                mp[s.top()]=n;
                s.pop();             
                
            }
            s.push(n);
        }
        for(int i=0;i<nums1.size();i++){
            if(mp[nums1[i]]){
                ans[i]=mp[nums1[i]];
            }else{
                ans[i]=-1;
            }
        }
        
            return ans;
        
    }
};