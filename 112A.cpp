//   112A   ---->>  Petya and string  <<----

#include<bits/stdc++.h>
using namespace std;

int work()
{
    string a;
    cin >> a;
    string b;
    cin >> b;

    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i] -=32;
        }

        if(b[i]>=97 && b[i]<=122)
        {
            b[i] -=32;
        }
    }  

    if(a.compare(b) == 0)
    {
        return 0;
    }  

    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i] - b[i] == 0)
        {
            continue;
        }else if(a[i] - b[i] > 0)
        {
            return 1;
        }else if(a[i] - b[i] < 0)
        {
            return -1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout <<  work() << endl;
    return 0;
}