//               1690A. Print a Pedestal (Codeforces logo?)

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n;
    cin >> n;
    int rem = n%3;
    if(rem == 0)
    {
        rem=1;
    }
    int first = n/3 + rem;
    int second = first-1;
    int third = second-1;

    int rem_bric = n-(first+second+third);

    if(rem_bric == 2)
    {
        first+=1;
        second+=1;
    }else if(rem_bric == 1)
    {
        first++;
    }else if(n < (first+second+third))
    {
        third+=n-(first+second+third);
    }


    cout << second << " "<< first << " " << third << endl;
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