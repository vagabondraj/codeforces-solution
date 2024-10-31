#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        int take=0;
        int give =0;
        
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }

        for(int i=0; i<n; i++)
        {
            if(a[i] >= k)
            {
               take+=a[i];
            }
        }
        
        for(int i=0; i<n; i++)
        {
            if(a[i] == 0 && take>0)
            {
                give ++;
                take --;
            }
        }
        
        cout << give << endl;
    }

    return 0;
}