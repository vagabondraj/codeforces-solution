//    1858A    ---->>>>     Buttons     <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    ll a,b,c;
    cin >> a >> b >> c;
    
    ll maxii = max(a,b);
    ll minii = min(a,b);
    ll delta = maxii-minii;
    
    if(a!=b)
    {
    if(c>= delta)
    {
        minii+=delta;
        c-=delta;
    }
    if(c<delta)
    {
        minii+=delta;
        c=0;
    }
    }

    if(a==b && c%2 == 0)
    {
        cout << "Second" << endl;
    }else if(a==b && c%2 != 0)
    {
        cout << "First" << endl;
    }else if(a>b)
    {
        cout << "First" << endl;
    }else if(b>a)
    {
        cout << "Second" << endl;
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