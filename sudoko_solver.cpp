#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
   bool solve(vector<vector<char>>&board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(char ch='1';ch<='9';ch++){
                        if(valid(i,j,ch,board)==true){
                            board[i][j]=ch;
                        if(solve(board)==true)return true;
                        else board[i][j]='.';
                        }
                    }
                    return false;
                    
                }
            }
        }
        return true;
    }
    
    
      bool valid(int row,int col,char c,vector<vector<char>>&board){
         for(int i=0;i<9;i++){
            if(board[i][col]==c) return false;
            if(board[row][i]==c) return false;
        }
        int sr=(row/3)*3;
        int sc=(col/3)*3;
        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++){
                if(board[i][j]==c) return false;
            }
        }
        return true;
    }
    
    
    
    
    bool solveSudoku(vector<vector<char>>& board) {
      return  solve(board);
        
    }
};