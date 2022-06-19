#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int res=0;
        int maxleft=0,maxright=0,left=0,right=n-1;
        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>maxleft){
                    maxleft=height[left];
                }else{
                    res+=maxleft-height[left];
                }
                left++;
            }else{
                if(height[right]>maxright){
                    maxright=height[right];
                }else{
                    res+=maxright-height[right];
                }
                right--;
            }
        }
        return res;
        
    }
};


//stack solution

class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        stack<int>s;
        for(int i=0;i<n;i++){
            while(!s.empty() && height[s.top()]<height[i]){
                int pop_height=height[s.top()];
                s.pop();
                if(s.empty())break;
                int dis=i-s.top()-1;
                int min_height=min(height[s.top()],height[i])-pop_height;
                ans+=min_height*dis;
                
            }
            s.push(i);
        }
        return ans;
    }
};