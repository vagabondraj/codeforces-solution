//   2104A

#include<bits/stdc++.h>
using namespace std;

void work()
{
    int a,b,c;
    cin >> a >> b >> c;

    int diffa_b = b-a;
    if(diffa_b < c)
    {
        a+=diffa_b;
        c-=diffa_b;
    }

    if(b>c)
    {
        cout << "NO" << endl;
        return;
    }

    int diffb_c = c-b;
    if(diffb_c % 3 == 0)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
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