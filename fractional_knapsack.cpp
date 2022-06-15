#include<bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


class Solution
{
    public:
  
    double fractionalKnapsack(int W, Item arr[], int n){
        sort(arr,arr+n,[&](Item&a,Item&b){
            return (((long)a.value*b.weight))>(((long)b.value*a.weight));
        });
        double res=0;
        for(int i=0;i<n;i++){
            double use=min(W,arr[i].weight);
            res+=(use*arr[i].value)/(arr[i].weight);
            W-=use;
        }
        return res;
    }};