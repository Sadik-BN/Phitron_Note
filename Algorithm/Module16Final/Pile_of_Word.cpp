#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        bool flag=false;
        cin>>s1>>s2;
        
        if(s1.size()==s2.size())
        {
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2)
            {
                flag=true;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}