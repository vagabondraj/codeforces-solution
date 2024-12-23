//    2051A    ---->>>>    Preparing For The Olympiad    <<<<----

#include<bits/stdc++.h>
using namespace std;

void work()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }   

    vector<int> dp(n + 1, 0);

    for(int i=0; i<n; i++)
    {
        int m = a[i];
        int s=0;
        if(i+1 <n)
        {
            s=b[i+1];
        }
        dp[i + 1] = max(dp[i + 1], dp[i] + m - s);
        dp[i + 1] = max(dp[i + 1], dp[i]);
    } 
    cout << dp[n] << endl;
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