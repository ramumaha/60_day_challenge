#include<bits/stdc++.h>
using namespace std;

bool makepage(vector<int>&A,int B,int mid){
    if(A[0]>mid)return false;
    int n=A.size();
    int c=1,sum=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>mid)return false;
        if((A[i]+sum)<=mid){
            sum+=A[i];
        }else{
            sum=A[i];
            c++;
        }
        
        
    }
    if(c>B)return false;
    return true;   
}


int books(vector<int> &A, int B) {
    int n=A.size();
    if(A.size()<B)return -1;
     int sum=0;
    int l=0;
    for(int i=0;i<n;i++){
        sum+=A[i];
        
    }
    int ans=-1;
    while(l<=sum){
        int mid=l+(sum-l)/2;
        if(makepage(A,B,mid)){
            ans=mid;
            sum=mid-1;            
        }else{
            l=mid+1;
        }
    }
    return ans;
    
}

