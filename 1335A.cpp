#include<bits/stdc++.h>
using namespace std;

void work()
{
    long long n;
    cin >> n;
    if(n%2 == 0)
    {
        cout << (n/2)-1 << endl;
    }else
    {
        cout << n/2 << endl;
    }
}


int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
        work();
    }

    return 0;
}