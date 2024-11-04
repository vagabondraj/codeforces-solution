#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n=0,k=0;
        cin >> n >> k;
        long long num;
        num = (n+1)/2 - (n-k+1)/2;
        
        if(num % 2 != 0)
        {
            cout << "NO" << endl;
        }else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}