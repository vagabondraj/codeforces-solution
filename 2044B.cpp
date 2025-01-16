//   2044B    ---->>  Normal Problem  <<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    string s;
    cin >> s;
    string ans;

    for(int i=s.length(); i>=0; i--)
    {
        if(s[i] == 'p')
        {
            ans+='q';
        }else if(s[i] == 'q')
        {
            ans+='p';
        }else
        {
            ans+=s[i];
        }
    }
    cout << ans << endl;
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