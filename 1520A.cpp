// 1520A   -->>  DO NOT BE DISTRACTED  <<--

#include<bits/stdc++.h>
using namespace std;

bool patternFollowed(const string s)
{
    char current_char = s[0];
    
    for(int i=0; s[i] != '\0'; i++)
    {
        if(current_char != s[i])
        {
            for(int j=i; s[j] != '\0'; j++)
            {
                if(current_char == s[j])
                {
                    return false;
                }
            }
            current_char =s[i];
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(patternFollowed(s))
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}