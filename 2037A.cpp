#include<bits/stdc++.h>
using namespace std;

void twice()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int score = 0;
    sort(a,a+n);

    for(int i=0; i<n; i++)
    {
        if(a[i] == a[i+1])
        {
            score++;
            i++;
        }
    }
    cout << score << endl;
}


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        twice();
    }

    return 0;
}