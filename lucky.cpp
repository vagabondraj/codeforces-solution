# include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    string n;
 
   while(t--)
   {
    cin >> n;
    if(n[0]+n[1]+n[2] == n[3]+n[4]+n[5])
    {
        cout << "yes" << endl;
    } else
    {
        cout << "no" << endl;
    }
   }
    return 0;
}