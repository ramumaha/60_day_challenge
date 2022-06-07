#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n=s.size();
        if(n==0)return 0;
        unordered_set<int>st;
        int j=0;
        int ans=0;
        int i=0;
       while(i<n){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
                ans=max(ans,(int)st.size());
                i++;
             
            }else{
                st.erase(s[j]);
                j++;
            }
            
        }
        return ans;
    }
};