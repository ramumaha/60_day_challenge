#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int>ans;
    void sum_(vector<int>&arr, int sum,int n){
        if(n==0){
            ans.push_back(sum);
            return;
        }
        sum_(arr,sum+arr[n-1],n-1);
        sum_(arr,sum,n-1);
    }

    vector<int>subsetSums(vector<int>arr,int N){
        sum_(arr,0,N);
        return ans;
    }
};