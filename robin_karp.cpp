#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        const int p=31;
        const int m=1e9+9;
        int H=haystack.size(),N=needle.size();
        if(N==0)return 0;
        vector<long long>p_pow(max(H,N));
        p_pow[0]=1;
        for(int i=1;i<(int)p_pow.size();i++){
            p_pow[i]=(p_pow[i-1]*p)%m;
        }
        vector<long long>h(H+1,0);
        for(int i=0;i<H;i++){
            h[i+1]=(h[i]+(haystack[i]-'a'+1)*p_pow[i])%m;
        }
        long int h_s=0;
        for(int i=0;i<N;i++){
            h_s=h_s+((needle[i]-'a'+1) * p_pow[i])%m;
        }
        for(int i=0;i+N-1<H;i++){
            long long cur_h=(h[i+N]+(m-h[i]))%m;
            if(cur_h==((h_s %m) *(p_pow[i]%m))%m){
                return i;
            }
        }
        return -1;
        
    }
};