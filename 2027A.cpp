#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n][2];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin >> a[i][j];
            }
        }

        int maxa =0;

        for(int i=0 ; i<n ; i++)
        {
          
                if(a[i][0] > maxa)
                {
                    maxa = a[i][0];
                }
            
        }

        int maxb =0;

        for(int i=0 ; i<n ; i++)
        {
            
                if(a[i][1] > maxb)
                {
                    maxb = a[i][1];
                }
            
        }
       
       cout << 2*(maxa + maxb) << endl;
    }

    return 0;
}