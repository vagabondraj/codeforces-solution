# include<bits/stdc++.h>
using namespace std;
 
int main()
{
     int arr[4];
     for(int i=0; i<4; i++)
     {
       cin >> arr[i];
     }
     int max = arr[0];
     for(int i=0; i<4; i++)
     {
      if(max < arr[i])
      {
            max = arr[i];
      }
     }
     for(int i=0; i<4; i++){
      if(arr[i] != max){
            cout << max - arr[i]  <<"\t";
      }
     }
      return 0;
}