#include<bits/stdc++.h>
 using namespace std;
class student
{
    public:
        string name;
        int roll;
        float cgpa;
    student(string name,int roll,float cgpa)
    {
        this->name=name;
        this->roll=roll;
        this->cgpa=cgpa;
    }

    void details()
    {
        cout << "Hello " <<this->name << endl <<"\t"<< "Your id: "<<this->roll<<endl<<"\t"<<"Your CGPA: "<<this->cgpa<<endl;
    }
};
int main()
{
    student sadik("Sadik",13,5.00);
    student adnan("Adnan",12,4.5);
    
    sadik.details();
    adnan.details();
    return 0;
}