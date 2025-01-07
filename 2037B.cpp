// 2037B -- >> intercepted input

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        int target = n-2;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        
        int start= 0;
        int end = n-1;
        
        sort(a,a+n);
        
        while(start < end)
        {
            int mul = a[start] * a[end];

            if(mul == target)
            {
                cout << a[start] << " " << a[end] << endl;
                break;
            }else if(mul < target)
            {
                start++;
            }else{
                end--;
            }
        }
    }
    return 0;
}