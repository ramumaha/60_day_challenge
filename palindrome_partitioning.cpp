#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>>ans;
    vector<string>partial_ans;
    bool ispali(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    
    void helper(string s,int index){
        if(index==s.size()){
            ans.push_back(partial_ans);
            return;
        }
        for(int i=index;i<s.size();i++){
            if(ispali(s,index,i)){
                partial_ans.push_back(s.substr(index,i-index+1));
                helper(s,i+1);
                partial_ans.pop_back();
            }
        }
    }
    
    
    
    
    vector<vector<string>> partition(string s) {
       helper(s,0); 
        return ans;
    }
};