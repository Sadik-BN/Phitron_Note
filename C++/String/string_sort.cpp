#include<bits/stdc++.h>
 using namespace std;

int main()
{
    string s="hadgcbef";

    //accending
    sort(s.begin(),s.end());
    cout << s << endl;

    //decending
    sort(s.begin(),s.end(),greater<char>());
    cout << s << endl;

    //reverse
    string s1="calculator";
    reverse(s1.begin(),s1.end());
    cout << s1 << endl;

    return 0;
}