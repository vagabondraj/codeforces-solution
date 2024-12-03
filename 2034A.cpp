// King Keykhosrow's Mystery 

#include<bits/stdc++.h>
using namespace std;

void king()
{
    int a,b;
    cin >> a >> b;
    
    long int d=min(a,b);
    while(1)
    {
        if(d%a == d%b)
        {
            cout << d << endl;
            break;
        }else
        {
            d++;
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        king();
    }

    return 0;
}