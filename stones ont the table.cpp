# include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     int count = 0;
     string str;
     cin >> n >> str;
     for(int i=0 ; i< str.length(); i++){
          if(str[i] == str[i-1])
          {
               count ++;
          }else
          {
               continue;
          }
     }
     cout << count << endl;
}