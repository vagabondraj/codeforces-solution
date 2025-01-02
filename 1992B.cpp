//     1992B     ---->>>>     Angry  Monk      <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n,k;
    cin >> n >> k;
    int a[k];
    for(int i=0; i<k; i++)
    {
        cin >> a[i];
    }

    sort(a,a+k);
    int oper=0;
    for(int i=0; i<k-1; i++)
    {
        if(a[i] >= 2)
        {
            oper += (a[i]-2)*2+3;
        }else
        {
            oper+=a[i];
        }
    }
    cout << oper << endl;
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