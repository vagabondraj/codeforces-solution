# include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int sum=0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum = sum+arr[i];
    }
    if(sum > 0) 
    {
        cout << "HARD" << endl;
    } else{
        cout << "EASY" << endl;
    }
    return 0;
}