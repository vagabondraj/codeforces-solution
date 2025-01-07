#include<bits/stdc++.h>
using namespace std;

void wait()
{
    char ch;
    int n;
    cin >> ch >> n;
    static long int people=0;
    static long int seats=0;

   if(ch == 'P')
   {
    people +=n;
   }

   if(ch == 'B')
   {
    seats +=n;

    if(seats >= people+1)
    {
        cout << "YES" << endl;
        seats =0;
        people =0;
    }else
    {
        cout << "NO" << endl;
    }
    
   }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        wait();
    }
    
    return 0;
}