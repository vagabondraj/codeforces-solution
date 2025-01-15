
// 2040A  ---->> Game Of Division  <<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(abs(a[i] - a[j]) % k == 0)
            {
                cnt++;
            }
        }

        if(cnt == 1)
        {
            cout << "YES" << endl;
            cout << i+1 << endl;
            return;
        }else
        {
            cnt = 0;
        }
    }
   
   cout << "NO" << endl;
   
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

