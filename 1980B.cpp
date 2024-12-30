//     1980B      ---->>>>    Choosing  Cubes      <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n,k,f;
    cin >> n >> k >> f;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int ele = a[k-1];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == ele)
        {
            cnt++;
        }
    }

    stable_sort(a,a+n,greater<>());
    int index=0;

    for(int i=n-1; i>=0; i--)
    {
        if(a[i] == ele)
        {
           index =i+1;
           break;
        }
    }
   

    int apper=0;
    for(int i=0; i<f; i++)
    {
       if(a[i] == ele)
       {
        apper++;
       }
    }

    if((apper>0 && cnt == 1 ) || index <= f)
    {
        cout << "YES" << endl;
    }else if(apper>0 && cnt >1)
    {
        cout << "MAYBE" << endl;
    }else
    {
        cout << "NO" << endl;
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