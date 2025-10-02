#include<bits/stdc++.h>
using namespace std;
void fibonacci_series(int n,int a=0,int b=1,int i=1)
{
        if(i>n)
            return;
        
        cout<<a<<" ";
        int tmp=b;
        b=a+b;
        a=tmp;
        fibonacci_series(n,a,b,i+1);
        
}
int nth_fibonacci(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;

    return nth_fibonacci(n-1)+nth_fibonacci(n-2);
}
int main()
{
    int n;
    cin>>n;
    fibonacci_series(n);
    
    cout<<endl<<nth_fibonacci(n)<<endl;
    return 0;
}