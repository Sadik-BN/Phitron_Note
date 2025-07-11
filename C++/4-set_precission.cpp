#include<iostream>
#include<iomanip> //input output manipulation , header file of setprecision() function.
using namespace std;
int main()
{
    double x = 3.609578;

    cout << fixed << setprecision(2)<< x;

    //without the "fixed" keyword it will print first 3 numbers.No matter if the number is before or after decimal point. 
    //with "fixed" it will print 3 number after decimal point.
    return 0;
}