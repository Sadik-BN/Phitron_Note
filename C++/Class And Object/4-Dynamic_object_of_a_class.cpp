#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
        int cls;
        int roll;
};

Student* f()
{
    Student* ptr= new Student;//dynamic object.

    ptr->cls=10;
    ptr->roll=6;

    return ptr;
}

int main()
{
    Student* Sadik=f();

    cout<< "Roll of Sadik: "<< Sadik->roll;

    return 0;
}