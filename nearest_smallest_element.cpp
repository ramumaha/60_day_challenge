#include<bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> &nums) {
    int n=nums.size();
    stack<int>s;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[i]=-1;
        while(!s.empty() && s.top()>=nums[i]){
            s.pop();
        }
        if(!s.empty()){
            ans[i]=s.top();
            
        }
        s.push(nums[i]);
    }
    return ans;
}
