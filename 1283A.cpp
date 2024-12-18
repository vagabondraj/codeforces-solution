//  1283A   ---->> Minute Before The New Year  <<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int hh,mm;
    cin >> hh >> mm;

    int hrs_rem = (24-hh-1);
    int min_rem = (60-mm);

    int min_rem_in_year = (hrs_rem)*60 + min_rem;
    cout << min_rem_in_year << endl;
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

