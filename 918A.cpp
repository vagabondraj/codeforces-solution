// 918A    ---->>>>   Eleven    <<<<----

#include<bits/stdc++.h>
using namespace std;

bool isFibonacii(int n)
{
    int num1 = 5*n*n -4;
    int num2 = 5*n*n +4;
    int s_r1 = sqrt(num1);
    int s_r2 = sqrt(num2);

    if(s_r1*s_r1 == num1 || s_r2*s_r2 == num2)
    {
        return true;
    }else
    {
        return false;
    }
}

void ans()
{
    int n;
    cin >> n;
    string ans;
    for(int i=1; i<=n; i++)
    {
        if(isFibonacii(i))
        {
            ans+='O';
        }else
        {
            ans+='o';
        }
    }

    cout << ans << endl;
}


int main()
{
    ans();
    return 0;
}