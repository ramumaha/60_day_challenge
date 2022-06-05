#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
    for(int i=0;i<m;i++){
            int k=n-1;
            int j=0;
            while(j<k){
                swap(matrix[k][i],matrix[j][i]);
                k--;
                j++;   
            }
        }
            for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
              int temp=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                
            }
        }
        
    }
};