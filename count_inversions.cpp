#include<bits/stdc++.h>
using namespace std;

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:

    #define ll long long

ll int mergeSort(long long arr[],long long temp[],ll int left,ll int right ){
    ll int mid,inv_count=0;
    if(left<right){
       mid=(left+right)/2;
        inv_count+=mergeSort(arr,temp,left,mid);
        inv_count+=mergeSort(arr,temp,mid+1,right);
        inv_count+=merge(arr,temp,left,mid+1,right);
    }
    return inv_count;
}

ll int merge(long long arr[],long long temp[],ll int left,ll int mid,ll int right){
    ll int i,j,k,inv_count=0;
    i=left,k=left,j=mid;
    while(i<=mid-1 && j<=right){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }else{
            temp[k++]=arr[j++];
            inv_count=inv_count+(mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(int i=left;i<=right;i++){
        arr[i]=temp[i];
    }
    return inv_count;
}

   long long int inversionCount(long long int  arr[], long long int N)
{ ll int ans=0;
ll int temp[N];
ans=mergeSort(arr,temp,0,N-1);
return ans;
  
}
    
};



int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
