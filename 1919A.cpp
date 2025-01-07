//              1919A - Wallet Exchange

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    long long a,b;
    cin >> a >> b;

    long long d= abs(a-b);

    if(d%2 == 0)
    {
        cout << "Bob" << endl;
    }else
    {
        cout << "Alice" << endl;
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