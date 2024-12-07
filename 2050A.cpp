// 2050A -->> Line Breaks

#include<bits/stdc++.h>
using namespace std;

void work()
{
    int a,b;
    cin >> a >> b;
    string s;
    int ans=0;
    while(a--)
    {
        cin >> s;
        int l = s.length();
        b-=l;
        if(b >= 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        work();
    }
}