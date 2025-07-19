#include<bits/stdc++.h>
 using namespace std;

int main()
{
    list<string> l;
    string s ;
    while(true)
    {
        cin >> s;
        if(s == "end")
            break;
        l.push_back(s);
    }
    int sz=l.size();
    int q;
    cin >> q;
    for(int i=1;i<=q;i++)
    {
        string command;
        cin >> command;
        int index;
        if(command=="visit")
        {
            string website;
            cin>> website;
            bool flag=false;
            for(int j=0;j<sz;j++ )
            {
                if(website==*(next(l.begin(),j)))
                {
                    flag=true;
                    index=j;
                    break;
                }
            }
            if(flag==true)
            {
                cout<<*(next(l.begin(),index))<<endl;
                
            }
            else
            {
                cout<<"Not Available"<<endl;

            }
        }
        if(command=="prev")
        {
            if(index>=1 && index<sz)
            {
                index=index-1;
                cout<<*(next(l.begin(),index))<<endl;
                
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }

        if(command=="next")
        {
            if(index>=0 && index<sz-1)
            {
                index=index+1;
                cout<<*(next(l.begin(),index))<<endl;
                
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }

    }
    return 0;
}