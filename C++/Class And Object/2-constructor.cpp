#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
        int cls;
        int roll;
        int cgpa;

    Student(int c,int r,int cg)
    {
        cls=c;
        roll=r;
        cgpa=cg;
    }
};
int main()
{
    Student sadik(13,6,5);
    Student anan(10,16,0);




    cout << sadik.cls << " " << sadik.roll << " " << sadik.cgpa<<endl;

    cout << anan.cls<< " " << anan.roll << " " << anan.cgpa <<endl;
       
}