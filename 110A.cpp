// 100A -->> Nearly Lucky Number  <<--

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int cnt=0,cnt4=0,cnt7=0;
    for(int i=0; s[i] != '\0'; i++)
    {
        if(s[i] == '4' || s[i] == '7')
        {
            cnt++;
        }
    }

    if((cnt == 4 || cnt == 7) )
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    return 0;
}