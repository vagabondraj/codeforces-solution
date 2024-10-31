// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int arr[4] = {0};
    for(int i=1; i<4; i++)
    {
        arr[a]++;
        arr[b]++;
    }

    for(int i=1; i<4; i++)
    {
        if(arr[i] == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}