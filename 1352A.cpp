//  1352A  -->> sum of round Numbers  <<--

#include<bits/stdc++.h>
using namespace std;

void lenght(int n)
{
    int cnt=0;
    int d=0;
    while(n>0)
    {
        d = n%10;
        n/=10;
        if(d!=0)
        {
        cnt++;
        }
    }
    cout << cnt << endl;
}

void work()
{
    int n;
    cin >> n;
    int mul =1,d=0;
    lenght(n);
    while(n >0)
    {
        d = (n%10)*mul;
        n/=10;
        mul*=10;
        if(d !=0)
        {
        cout << d << " ";
        }
    }
    cout << endl; 
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        work();
    }
    return 0;
}