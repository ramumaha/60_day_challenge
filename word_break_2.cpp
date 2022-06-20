#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_set<string>st;
    vector<string>ans;
    
    
    void helper(string s,int index,string cur){
        if(index==s.size()){
            cur.pop_back();
            ans.push_back(cur);         
        }
        string temp="";
        for(int i=index;i<s.size();i++){
            temp.push_back(s[i]);
            if(st.count(temp)){
                helper(s,i+1,cur+temp+" ");
            }
        }
    }
    
    
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        st=unordered_set<string>(wordDict.begin(),wordDict.end());
        helper(s,0,"");
        return ans;
        
    }
};