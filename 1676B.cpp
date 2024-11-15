#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
      cin >> a[i];
    }
    
    int eat=0;
    int min = INT_MAX;
    for(int i=0; i<n; i++)
    {
      if(a[i]  < min)
      {
        min = a[i];
      }
    }

   for(int i=0; i<n; i++)
   {
    eat += a[i]-min;
   }

    cout << eat << endl;
  }

  return 0;
}