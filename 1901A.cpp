//      1901A       ---->>>>      Line Trip      <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int max_dis=INT_MIN;

    for(int i=0;i<n-1; i++)
    {
        if(a[i+1]-a[i] > max_dis)
        {
            max_dis = a[i+1]-a[i];
        }
    }

    int d1=a[0];
    int d2 = 2*(x - a[n-1]);
    cout << max({a[0], max_dis, d2}) << endl;
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