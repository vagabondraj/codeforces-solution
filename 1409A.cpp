// 1409A -->> Yet Another Two Integer Problem

#include<bits/stdc++.h>
using namespace std;

void work()
{
    long long a,b;
    cin >> a >> b;
    
    long long e= abs(a-b);
    long long f = (e+9)/10;
    cout << f << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        work();
    }
    return 0;
}