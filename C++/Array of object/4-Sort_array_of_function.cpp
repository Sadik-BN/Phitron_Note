#include<bits/stdc++.h>
 using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
        
};
bool compare(Student age_boshbe,Student pore_boshbe)
{
    if(age_boshbe.marks > pore_boshbe.marks) 
    {
        return true;
    }
    else if(age_boshbe.marks == pore_boshbe.marks)
    {
        if(age_boshbe.roll < pore_boshbe.roll)
        {
           return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }

}
int main()
{
    int n;
    cin>> n;

    Student st[n];
    
    for(int i=0;i<n;i++)
    {
        cin >> st[i].name >> st[i].roll >> st[i].marks;    
    }

    sort(st,st+n,compare);

    for(int i=0;i<n;i++)
    {
        cout << i+1 << ". " << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    }
    
    return 0;
}