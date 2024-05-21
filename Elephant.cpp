# include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x,steps;
    cin >> x;
    int count = x/5;
    if(x%5==0){
        cout << count<< endl;
    } else{
        cout << count+1 << endl;
    }
   
    return 0;
}   