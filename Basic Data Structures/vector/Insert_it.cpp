#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n1,n2,x;
    cin >> n1;
    vector <int> a1(n1);
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    cin >> n2;

    vector<int> a2(n2);

    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    cin >> x;

    a1.insert(a1.begin()+x,a2.begin(),a2.end());

    for (int i = 0; i < n1+n2; i++)
    {
        cout << a1[i] << " ";
    }
    
    
    return 0;
}