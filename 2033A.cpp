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
        int x = 0;
        int count=0;
 
        while(true)
        {
            x-=((2*(count+1))-1);
            count++;
            if(x<-n)
            {
                break;
            }
 
            x+=((2*(count+1))-1);
            count++;
            if(x>n)
            {
                break;
            }
        }
 
 
        if(count % 2 != 0)
        {
            cout << "Sakurako" << endl;
        }else
        {
            cout << "Kosuke" << endl;
        }       
    }
 
    return 0;
}