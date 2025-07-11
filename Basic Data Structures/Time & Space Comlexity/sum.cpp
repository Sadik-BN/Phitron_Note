#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int num;
    cin >> num;

    // using loop
    // int sum =0;
    // for (int i = num; i >= 1; i--)
    // {
    //     sum+=i;
    // }

    //using formula
    int sum=num*(num+1)/2;

    cout << sum;
    return 0;
}