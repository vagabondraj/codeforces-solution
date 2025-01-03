//                              1837A - Grasshopper on a Line

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n,k;
    cin >> n >> k;
    if(n%k != 0 || n < k)
    {
        cout << "1" << endl;
        cout << n << endl;
    }else
    {
        cout << "2" << endl;
        cout << n-1 << " " << "1" << endl;
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