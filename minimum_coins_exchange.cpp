#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int n=coins.size();
      vector<vector<int>>dp(n+1,vector<int>(amount+1,INT_MAX-1000));
        for(int i=0;i<=n;i++){
            dp[i][0]=0;
        }
        for(int i=0;i<=amount;i++){
            dp[0][i]=INT_MAX-1000;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=amount;j++){
                if(j>=coins[i-1]){
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if(dp[n][amount]!=INT_MAX-1000){
            return dp[n][amount];
        }
        return -1;
       
        
                              
        
        
    }
};