//                     1853A. Desorting

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
 
    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
    }

    if(is_sorted(v.begin(), v.end()))
    {
    ll min = LLONG_MAX;
    for(ll i=0; i<n-1; i++)
    {
        ll d = v[i+1]-v[i];
        if(d < min)
        {
            min = d;
        }
    }
    cout << (min/2) + 1 << endl;
    }else
    {
        cout << 0 << endl;
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