//                1929A - Sasha and the Beautiful Array

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);
    int max_sum=0;
    for(int i=1; i<n; i++)
    {
        max_sum+=(a[i] - a[i-1]);
    }
    cout << max_sum << endl;
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