#include<bits/stdc++.h>
 using namespace std;
 class cricketer
 {
    public:
        int jersey;
        string team;
        cricketer(int jersey,string team)
        {
            this->jersey=jersey;
            this->team=team;
        }
 };

int main()
{
    cricketer* dhoni = new cricketer(100,"India");
    cricketer* kohli = new cricketer(18,"India");
    *dhoni=*kohli;//full object copy hoy .memory address na. '*' na dile memory address copy hoto delete korle sob delete hoye jeto.
    delete kohli;
    cout << dhoni->jersey<< endl << dhoni->team ;
    return 0;
}