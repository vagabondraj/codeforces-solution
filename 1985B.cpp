// 1985B  -->>  Maximum Multiple Sum  <<--

#include<bits/stdc++.h>
using namespace std;

void work()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    int max_ele =0;
    for(int i=2; i<=n; i++)
    {
        int sum=0;
        for(int j=2; j<=n; j++)
        {
            if(j%i == 0)
            {
                sum+=j;
            }
        }
        if(max < sum)
        {
            max = sum;
            max_ele = i;
        }
    }

    cout << max_ele << endl;
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