// 1878A   ---->>  How Much Does Daytona Cost?  <<----

#include<bits/stdc++.h>
using namespace std;

void work()
{
    int n,ele;
    cin >> n >> ele;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == ele)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        work();
    }
    return 0;
}