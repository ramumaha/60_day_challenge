#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
      stack<char>s;
        s.push(-1);
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]=='(' || str[i]=='{' || str[i]=='[' ){
                s.push(str[i]);
            }else{
                if(str[i]==')' && s.top()!='('){
                    return false;
                }
                if(str[i]=='}' && s.top()!='{'){
                    return false;
                }
                if(str[i]==']' && s.top()!='['){
                    return false;
                }
                s.pop();
            }
        }
        
        if(s.top()==-1)return true;
        return false;
        
    }
};