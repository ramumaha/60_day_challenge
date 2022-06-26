#include<bits/stdc++.h>
using namespace std;


vector<int> solve(vector<int> &A, vector<int> &B, int C) {
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int n=A.size(),m=B.size();
    priority_queue<pair<int,pair<int,int>>>pq;
    set<pair<int,int>>s;
    pq.push({A[n-1]+B[m-1],{n-1,m-1}});
    s.insert({n-1,m-1});
    vector<int>ans;
    while(C--){
        pair<int,pair<int,int>>temp=pq.top();
        pq.pop();
        ans.push_back(temp.first);
        int l=temp.second.first;
        int r=temp.second.second;
        if(r>0 && l>=0 && s.find({l,r-1})==s.end()){
            pq.push({A[l]+B[r-1],{l,r-1}});
            s.insert({l,r-1});
        }
        if(r>=0 && l>0 &&s.find({l-1,r})==s.end()){
            pq.push({A[l-1]+B[r],{l-1,r}});
            s.insert({l-1,r});
        }
        
    }   
    
    return ans;
    
    
}
