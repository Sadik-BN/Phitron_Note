#include<bits/stdc++.h>
using namespace std;
int factotial(int n)
{
    if(n<2)
    {
        return 1;
    }
    int fact = n*factotial(n-1);

    return fact;
}
int main()
{
    int n;
    cin>>n;

    cout<<"Factorial of "<<n<<" is "<<factotial(n)<<endl;
    return 0;
}