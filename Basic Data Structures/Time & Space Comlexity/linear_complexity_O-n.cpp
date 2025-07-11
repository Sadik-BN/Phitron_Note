#include<bits/stdc++.h>
 using namespace std;

int main()
{
    int n; // complexity O(1)
    cin >> n;// complexity O(1)

    for(int i=1; i<=n ;i++)
    {
        cout << i << " ";// complexity O(n)
    }
    return 0;// complexity O(1)
// ---------------------------------------------
//        total complexity O(1+1+n+1)
//                        =O(n+3)
//                        = O(n) [ignoring the constant]
//                        = final complexity [which is the highest or worst condition complexity]

}