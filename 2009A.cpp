// Online C++ compiler to run C++ program online
# include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int n = (b-a);
        int arr[n];;
        
        for(int i=0; i<=n; i++)
        {
            for(int c=a; c<=b; c++)
            {
                arr[i] = (c-a)+(b-c);
            }
        }
        sort(arr,arr+n);
        cout << arr[0] << endl;
    }
    return 0;
}