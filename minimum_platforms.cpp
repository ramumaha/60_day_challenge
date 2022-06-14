#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    int findPlatform(int arr[], int dep[], int n)
    {
    	vector<pair<int,int>>intervals;
    	for(int i=0;i<n;i++){
    	    intervals.push_back({arr[i],dep[i]});
    	}
    	sort(intervals.begin(),intervals.end());
    	priority_queue<int, vector<int>, greater<int> > p;
    int c= 1;
    p.push(intervals[0].second);
    for(int i=1;i<n;i++){
        if(p.top()>=intervals[i].first){
            c++;
        }else{
            p.pop();
        }
        p.push(intervals[i].second);
    }
    return c;
    }
};