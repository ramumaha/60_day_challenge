#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m =grid[0].size();
        vector<pair<int,int>>mov={{0,1},{1,0},{-1,0},{0,-1}};
        
        queue<pair<int,int>>q;
        int fresh=0,minute=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    fresh++;
                } else if(grid[i][j]==2){
                    q.push(make_pair(i,j));
                }
            }
        }
        
        while(!q.empty()){
            int sz=q.size();
            for(int i=0;i<sz;i++){
                auto pos=q.front();
                q.pop();
                for(auto k:mov){
                    int x=pos.first+k.first;
                    int y=pos.second+k.second;
                    if(x>=0 && y>=0 && x<n&&y<m&&grid[x][y]==1){
                        grid[x][y]=2;
                        q.push(make_pair(x,y));
                        fresh--;
                    }
                }
                
            }
            minute++;
        }
        return (fresh > 0) ? -1 : ((minute == -1) ? 0 : minute);
    }
};