//    1971B     ---->>>>     Different String     <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    string s;
    cin >> s;
    int n=s.length()-1;

    string ans;

    for(int i=n; i>=0; i--)
    {
        ans+=s[i];
    }

    if(ans.compare(s) == 0)
    {
        cout << "NO" << endl;
    }else
    {
        cout << "YES" << endl;
        cout << ans << endl;
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