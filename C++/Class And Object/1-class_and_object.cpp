#include<bits/stdc++.h>

using namespace std;

class Student
{
    public:
        char name[100];
        char batch[20];
        int roll;
};
int main()
{
    Student sadik,anan;

    cin.getline(sadik.name,100);
    cin.getline(sadik.batch,20);
    cin >> sadik.roll;
    
    getchar(); 

    cin.getline(anan.name,100);
    cin.getline(anan.batch,20);
    cin >> anan.roll;


    cout << sadik.name << endl << sadik.batch << endl << sadik.roll <<endl;

    cout << anan.name << endl << anan.batch << endl << anan.roll <<endl;
       
}