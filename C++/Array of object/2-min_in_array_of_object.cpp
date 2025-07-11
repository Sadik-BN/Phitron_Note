#include<bits/stdc++.h>
 using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
        
};
int main()
{
    int n;
    cin>> n;

    Student st[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> st[i].name >> st[i].roll >> st[i].marks;       
    }

    

    // Student min_marked;
    // int min_marked = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     if(st[i].marks<=min_marked.marks)
    //     {
    //         min_marked=st[i];
    //     }
    // }

    // cout << min_marked.name <<" " << min_marked.roll << " " << min_marked.marks << " got lowest mark" << endl;
    
    //1 jon er beshi lowest number pele ei code r properly work hobe na



//1 jon er beshi student lowest number pele ei code sobar ta dekhabe
    int min_mark=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        min_mark = min(min_mark,st[i].marks);
    }
    for (int i = 0; i < n; i++)
    {
        if (st[i].marks==min_mark)
        {
            cout << st[i].name << " got lowest mark in the class which is "<< st[i].marks<< endl;
        }
    }

    return 0;
}