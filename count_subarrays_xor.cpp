#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int solve(vector<int> &A, int B) {
        unordered_map<int,int>mp;
        int xorr=0;
        int c=0;
        for(auto&i:A){
            xorr^=i;
            if(xorr==B)c++;
            int h=xorr^B;
            if(mp.find(h)!=mp.end()){
                c+=mp[h];
            }
            mp[xorr]++;
        }
        return c;




    }};