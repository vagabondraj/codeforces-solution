// 1348A    ---->>>>      Phoenix and Balanced      <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n;
    cin >> n;
    
    vector<ll> v;
    for(int i=1; i<=n; i++)
    {
        v.push_back(pow(2,i));
    }

    ll First_Pile=0;
    ll Second_Pile=0;

    for(int i=0; i<n; i++)
    {
        if(i<(n/2)-1 || i == n-1)
        {
            First_Pile+=v[i];
        }else
        {
            Second_Pile+=v[i];
        }
    }

    cout << abs(First_Pile-Second_Pile) << endl;
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