# include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin >> k >> n >> w;
    int money_needed = 0;
    for(int i=0; i<=w; i++){
         money_needed += (i*k);
    }
    if(money_needed<=n){
         cout << 0 << endl;
    }
    else{
         cout << money_needed - n << endl;
    }
    return 0;
}