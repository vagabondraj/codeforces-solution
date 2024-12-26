//     1537A      ---->>>>     Arithmetic  Array      <<<<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n;
    cin >> n;
    vector<int> v(n);
    float sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        sum+=float(v[i]);
    }
   
   int len=v.size();
   int chiz = len+1-sum;
   if(sum/len == 1.00)
   {
    cout << "0" << endl;
   }else
   {
    if(chiz > 0 || chiz==0)
    {
        cout << "1" << endl;
    }else if(chiz <0)
    {
        cout << abs(chiz)+1 << endl;
    }
   }

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