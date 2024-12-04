// 1829B -->>  Blank space  

#include<bits/stdc++.h>
using namespace std;

void work()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int cntzero =0;
    int maxZero =0;

    for(int i=0; i<n; i++)
    {
        if(a[i] == 0)
        {
            cntzero++;
        }else
        {
            maxZero = max(maxZero, cntzero);
            cntzero =0;
        }
    }

    cout << max(maxZero,cntzero) << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        work();
    }
}