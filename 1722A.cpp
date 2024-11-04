// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l;
        cin >> l;
        char n[l];
        for(int i=0; i<l; i++)
        {
            cin >> n[i];
        }

        if(l == 5)
        {
            int cntT =0,cnti=0,cntm=0,cntu=0,cntr=0;
        for(int i=0; i<5; i++)
        {
           if(n[i] == 'T')
           {
               cntT ++;
           }else if(n[i] == 'i')
           {
               cnti++;
           }else if(n[i] == 'm')
           {
               cntm ++;
           }else if(n[i] == 'u')
           {
               cntu ++;
           }else if(n[i] == 'r')
           {
               cntr ++;
           }
        }
           if(cntT == 1 && cnti ==1 && cntm == 1 && cntu ==1 && cntr ==1){
               cout << "YES" << endl;
           }else
           {
               cout << "NO" << endl;
           }
        }else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}