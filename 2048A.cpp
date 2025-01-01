//     2048A      ---->>>>    Kevin and Combination Lock     <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    ll n;
    cin >> n;
    if(n% 33 == 0)
    {
        cout << "YES\n";
    }else
    {
        cout << "NO\n";
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