//    1311A    ---->>>>    Add Odd Or Subtract Even    <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    ll a,b;
    cin >> a >> b;
    ll diff = abs(a-b);

    if((a>b && diff % 2 == 0) || (b>a && diff % 2 != 0))
    {
        cout << "1" << endl;
        return;
    }

    if((a>b && diff % 2 != 0) || (b>a && diff % 2 == 0))
    {
        cout << "2" << endl;
        return;
    }

    if(a==b)
    {
        cout << "0" << endl;
        return;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        work();
    }
    return 0;
}