#include<bits/stdc++.h>
using namespace std;



long int countmiddle(vector<int>&arr,int m){
   long int l=0,r=arr.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]<=m){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    return l;
    
}






int findMedian(vector<vector<int> > &A) {
   long long int l=1,r=pow(10,9);;
   long int n=A.size(),m=A[0].size();
    while(l<=r){
        int mid=l+(r-l)/2;
        int c=0;
        for(int i=0;i<A.size();i++){
            c+=countmiddle(A[i],mid);
        }
        if(c<=(n*m)/2){
            l=mid+1;
        }else{
            r=mid-1;
        }
        
    }
    return (int)l;
}
