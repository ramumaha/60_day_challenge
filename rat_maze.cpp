#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<string>fans;
    int len;
    vector<vector<int>>temp;
    void dfs(int i,int j,string ans){
         if(i>len || j>len || i<0 || j<0 || temp[i][j]==0)return;
        if(i==len && j==len){
            fans.push_back(ans);
            return;
        }
       
        temp[i][j]=0;
        dfs(i+1,j,ans+"D");
        dfs(i,j+1,ans+"R");
        dfs(i-1,j,ans+"U");
        dfs(i,j-1,ans+"L");
        temp[i][j]=1;
        
        
        
        
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        temp=m;
        len=n-1;
       dfs(0,0,"");
       return fans;
    }
};
