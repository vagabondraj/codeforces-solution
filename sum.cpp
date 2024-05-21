# include<bits/stdc++.h>
using namespace std;
 
int main()
{    
    int test;
    cin >> test;
    while(test --){
     int a,b,c;
     cin >> a >> b >> c;
     (a == b+c || b == a+c || c == a+b) ? cout << "yes" << endl : cout << "No" << endl;
    }
      return 0;
}