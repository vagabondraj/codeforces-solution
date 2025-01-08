//                       1933B - Turtle Math: Fast Three Task

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n;
    cin >> n;
    int a[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }

    if(sum%3 == 0)
    {
        cout << 0 << endl;
        return;
    }

    for(int i=0; i<n; i++)
    {
        if((sum - a[i]) %3 == 0)
        {
            cout << 1 << endl;
            return;
        }
    }
    
    if(sum%3 == 1)
    {
        cout << 2 << endl;
    }else
    {
        cout << 1 << endl;
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