//    2051B    ---->>>>    Journey    <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;

   int sum1 = a;
   int sum2 = a+b;
   int sum3 = a+b+c;
   int day=3*(n/sum3);

   int rem_day = n%sum3;

   if(n%sum3 == 0)
   {
       cout << (n/sum3)*3 << endl;
       return;
   }

   if(rem_day <= sum1)
   {
    day+=1;
   }else if(rem_day <= sum2)
   {
    day+=2;
   }else if(rem_day <= sum3)
   {
    day+=3;
   }
   

   cout << day << endl;
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