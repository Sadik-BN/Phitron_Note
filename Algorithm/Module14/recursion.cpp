#include<bits/stdc++.h>
using namespace std;
void one_to_n(int n,int i)
{
    if(i>n)
        return;
    cout<<i<<endl;
    one_to_n(n,i+1);

}
void n_to_one(int n,int i)
{
    if(i>n)
        return;
    n_to_one(n,i+1);
    cout<<i<<endl;
}
int sum_one_to_n(int i,int n)
{
    if(i>n)
        return 0;
    int sum=i+sum_one_to_n(i+1,n);
    return sum;
}
int main()
{
    int n;
    cin>>n;
    one_to_n(n,1);
    cout<<endl;
    n_to_one(n,1);
    cout<<endl;
    cout<<sum_one_to_n(1,n)<<endl;


    return 0;
}