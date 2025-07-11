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
    // if(age_boshbe.roll<= pore_boshbe.roll) //choto roll age hoy ejonne <=
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    return age_boshbe.roll<= pore_boshbe.roll; //shortcut
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