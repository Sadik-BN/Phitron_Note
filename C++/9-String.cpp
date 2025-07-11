#include<bits/stdc++.h>

using namespace std;

int main()
{
    //string without space
    char s[50];

    cin >> s;
    cin.ignore();// used to ignore "enter/new line" pressed after input of first string 

    //string with space
    char s2[50];

    cin.getline(s2,50);


    //string output
    cout << s << endl;
    cout << s2 << endl;

    return 0;
}