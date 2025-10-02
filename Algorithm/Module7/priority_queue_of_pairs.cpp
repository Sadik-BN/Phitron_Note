#include<bits/stdc++.h>
using namespace std;

int main()
{
    //basic priority queue
    // priority_queue<int> pq; //for max.
    // priority_queue<int,vector<int>,greater<int>> pq; //for min.

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    pq.push({5,3});
    pq.push({10,1});

    cout<<pq.top().first<<" "<<pq.top().second<<endl; //first value jar choto take priority dibe.
    return 0;
}