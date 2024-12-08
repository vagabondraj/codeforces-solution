// 1560A -->> Dislike of Three <<--

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> num;

        for(int i=1; i<=5000; i++)
        {
            if(i%3 != 0 && (i-3)%10 != 0)
            {
                num.push_back(i);
            }
        }
        cout << num.at(n-1) << endl;
    }
}