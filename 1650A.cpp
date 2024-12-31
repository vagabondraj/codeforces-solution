//       1650A      ----->>>>    Deletions of Two Adjacent Letters    <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    string s;
    cin >> s;
    char ch;
    cin >> ch;
    
    int cnt=0;
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i] == ch)
        {
            if(i%2 == 0)
            {
                cnt++;
            }
        }
    }
    if(cnt == 0)
    {
        cout << "NO" << endl;
    }else
    {
        cout << "YES" << endl;
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