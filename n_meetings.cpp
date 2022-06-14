#include<bits/stdc++.h>
using namespace std;


class Solution{

 public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>>intervals;
        for(int i=0;i<n;i++){
            intervals.push_back({end[i],i});
        }
        sort(intervals.begin(),intervals.end());
        int end_time=intervals[0].first;
        int c=1;
        for(int i=1;i<n;i++){
            if(start[intervals[i].second]>end_time){
                end_time=intervals[i].first;
                c++;
            }
        }
        return c;
        
    }
};