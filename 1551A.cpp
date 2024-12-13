//  1551A.cpp  -->>  Polycarp and Coins  <<--

#include<bits/stdc++.h>
using namespace std;

void work()
{
    long long n;
    cin >> n;
    long long cnt1 = n/3;
    long long cnt2=cnt1;
    if(n%3 == 1)
    {
        cnt1+=1;
    }else if(n%3 == 2)
    {
        cnt2+=1;
    }
   
   cout << cnt1 << " " << cnt2 << endl;
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