#include<bits/stdc++.h>
using namespace std;

//using stl

class Solution {
public:
 
    string getPermutation(int n, int k) {        
        string num="123456789";
        while(k>1){
            next_permutation(num.begin(),num.begin()+n);
            k--;
        }
        return num.substr(0,n);
        
        
    }
};


//without using stl


