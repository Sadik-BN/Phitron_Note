#include<bits/stdc++.h>
 using namespace std;

int main()
{
    //1
    string s1("Hello World");
    cout << s1<<endl;

    //2
    string s2("Hello World",4);
    cout << s2 << endl;

    //3
    string s3="Hello World";
    string t(s3,4);
    cout << t << endl;

    //4
    string s(5,'A');
    cout << s <<endl;
    return 0;
}