#include<bits/stdc++.h>
using namespace std;
 
void work()
{
    string s;
    cin >> s;
 
    string ans;
    for(int i=0; i<3; i++)
    {
        if(s[0] > s[2])
        {
            ans = '>';
        }else if(s[0] < s[2])
        {
            ans = '<';
        }else
        {
            ans = '=';
        }
    }
 
    cout << s[0] << ans << s[2] << endl;
}
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        work();
    }
    return 0;
}