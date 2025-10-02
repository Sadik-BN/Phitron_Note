#include<bits/stdc++.h>
using namespace std;
int value[1001];
int weight[1001];

int knapsack(int i, int weight_limit)
{
    //base case
    if(i<0)
        return 0;
    if(weight_limit<=0)
        return 0;



    if(weight_limit>=weight[i])
    {
        // we have 2 options
        //1. bag e rakhbo
        //2.bag e rakhbo na
        //we will get a value for every option and the max weight is answer

        int opt1=knapsack(i-1,weight_limit- weight[i]) + value[i];
        int opt2=knapsack(i-1,weight_limit);
        return max(opt1,opt2);
    }
    else
    {
        //ektai e option bage rakha jabe na jayga nai
        int opt=knapsack(i-1,weight_limit);
        return opt;
    }
}
int main()
{
    int n,weight_limit;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }

    cin>>weight_limit;

    cout<<knapsack(n-1,weight_limit);

    return 0;
}