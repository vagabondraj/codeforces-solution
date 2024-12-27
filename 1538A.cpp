//    1538A    ---->>>>     Stone Game    <<<<----

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

    int minii = *min_element(a,a+n);
    int maxii = *max_element(a,a+n);
    int mini=0;
    int maxi=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == minii)
        {
            mini =i;
        }else if(a[i] == maxii)
        {
            maxi = i;
        }
    }

    if(mini > maxi)
    {
        swap(mini,maxi);
    }

    int left_idx = maxi+1;
    int right_idx = n-mini;
    int middle_idx = (mini+1) + (n-maxi);

    cout <<  min({left_idx,right_idx,middle_idx}) << endl;
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