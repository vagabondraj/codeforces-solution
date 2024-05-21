# include<bits/stdc++.h>
using namespace std;
 void reverse(string& s)
 {
    int len = s.length();
    int n= len-1;
    int i=0;
    while(i<=n)
    {
        swap(s[i],s[n]);
        i++;
        n--;
    }
 }
 
 int main()
 {
    string s;
    cin >> s;
    string t;
    cin >> t;
    reverse(s);
  
    if(t.compare(s) == 0)
    {
         cout << "YES" << endl;
    } else
    cout << "NO";
    return 0;
 }