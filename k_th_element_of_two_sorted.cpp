#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n>m) return kthElement(arr2,arr1,m,n,k);
       int low=0,high,res=0;
       if(k<n) high = k;
       else high = n;
       while(low<=high)
       {
           int cut1 = (high+low)/2,cut2;
           if ((k-cut1)>m)
               cut2=m;
           else 
               cut2 = k-cut1;
           int l1 = cut1==0 ? INT_MIN : arr1[cut1-1];
           int l2 = cut2==0 ? INT_MIN : arr2[cut2-1];
           int r1 = cut1==n ? INT_MAX : arr1[cut1];
           int r2 = cut2==m ? INT_MAX : arr2[cut2];
           
           if(l1>r2)   high = cut1-1;
           else if(l2>r1) low = cut1+1;
           else
           {
              res = max(l1,l2);
              break;
           }
       }
       return res;
    }
};