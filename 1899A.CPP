// 1899A   ---->>  Game With Integers   <<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n;
    cin >> n;
    if(n%3 == 0)
    {
        cout << "Second" << endl;
        return;
    }

    if(n%3 == 1 || n%3 == 2)
    {
        cout << "First" << endl;
        return;
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