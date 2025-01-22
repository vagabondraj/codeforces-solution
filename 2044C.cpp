//    2044C  ---->>  Hard Problem   <<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int m,a,b,c;
    cin >> m >> a >> b >> c;
    int row_1 = m;
    int row_2 = m;
    int seat_max = 0;

    if(row_1 >= a)
    {
        seat_max+=a;
        row_1-=a;
    }else
    {
        seat_max+=row_1;
        row_1=0;
    }

    if(row_2 >= b)
    {
        seat_max+=b;
        row_2-=b;
    }else
    {
        seat_max+=row_2;
        row_2=0;
    }

    if(row_1 > 0 && row_1 >= c)
    {
        seat_max+=c;
        c=0;
    }else if(row_1 > 0 && row_1 < c)
    {
        seat_max+=row_1;
        c-=row_1;
    }

    if(row_2 > 0 && row_2 >= c)
    {
        seat_max+=c;
        c=0;
    }else if(row_2 > 0 && row_2 < c)
    {
        seat_max+=row_2;
        c-=row_2;
    }    

    cout << seat_max << endl;
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