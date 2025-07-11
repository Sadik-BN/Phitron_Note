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
    getchar();

    Student st[n];
    
    for(int i=0;i<n;i++)
    {
        getline(cin,st[i].name);
        cin >> st[i].roll >> st[i].marks;
        getchar();
    }

    for(int i=0;i<n;i++)
    {
        cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }
    
    return 0;
}