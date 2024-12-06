//  381A -->> Sereja and Dima

#include<bits/stdc++.h>
using namespace std;

void work(int n)
{
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int s=0,d=0;
    int left=0,right = n-1;
    bool sturn = true;

    while(left <= right)
    {
        if(a[left] > a[right])
        {
            if(sturn)
            {
                s+=a[left];
            }else
            {
                d+=a[left];
            }
            left++;
        }else
        {
            if(sturn)
            {
                s+=a[right];
            }else
            {
                d+=a[right];
            }
            right--;
        }
        sturn = !sturn;
    }


    cout << s << " " << d << endl;
}

int main()
{
    int n;
    cin >> n;
    work(n);
    return 0;
}