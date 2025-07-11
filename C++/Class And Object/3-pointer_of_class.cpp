#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
        int cls;
        int roll;
        int cgpa;

};
int main()
{
    Student sadik;

    Student *pointer;

    pointer= &sadik;


    cin >> (*pointer).cls >> pointer->roll >> pointer->cgpa;
    cout << (*pointer).cls << " " << pointer->roll << " " << pointer->cgpa <<endl;
    
    return 0;
}