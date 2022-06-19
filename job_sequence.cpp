#include<bits/stdc++.h>
using namespace std;


class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { int maxi_ded=INT_MIN;
        for(int i=0;i<n;i++){
            maxi_ded=max(maxi_ded,arr[i].dead);
    }
    vector<int>slots(maxi_ded+1);
    int profit=0,cnt=0;
       sort(arr, arr+n, [&](Job& a, Job& b){return a.profit > b.profit;});
        for(int i = 0; i < n; i++){
            auto job = arr[i];
            for(int j = job.dead; j>=1; j--){
                if(slots[j] == 0){
                    slots[j] = 1;
                    profit += job.profit;
                    cnt++;
                    break;
                }
            }
        }
        
        return {cnt, profit};
    } 
    
};