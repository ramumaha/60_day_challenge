#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0,r=n*m-1;
        while(l<=r){
            int mid=(l+r)>>1;
            int selected=matrix[mid/m][mid%m];
            if(selected==target)return true;
            if(selected>target)r=mid-1;
            else{
                l=mid+1;
            }
        }
        return false;
        
    }
};