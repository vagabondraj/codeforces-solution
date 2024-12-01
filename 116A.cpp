// tram 

#include<bits/stdc++.h>
using namespace std;

void tram()
{
    int t;
    cin >> t;

    int max = INT_MIN;
    int a[t][2];
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> a[i][j];
        }
    }

    int pass =0;
    
    for(int i=0; i<t; i++)
    {
        pass -= a[i][0];
        pass += a[i][1];

        if(max < pass)
    {
        max = pass;
    }
    }
     cout << max << endl;
}

int main()
{
    tram();

    return 0;
}