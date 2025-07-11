#include<bits/stdc++.h>
 using namespace std;
void fun (int* &p)
{
    int y;
    p=&y;
    cout<<"address edited in fun() "<<p<<endl;
}
int main()
{
    int x=10;

    int*p=&x;

    cout<<"addres before calling fun() "<<p<<endl;

    fun(p);

    cout<< "adress after calling fun() " << p<< endl;

    cout<<" thus we can edit same pointer variable from another funtion and it will show the change in main. ";

    return 0; 
}