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
   for(int i=1; i<ans.length(); i++)
   {
       cout << ans[i];
   }
   cout << endl;  
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