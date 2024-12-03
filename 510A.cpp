// fox and snake

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r=0,c=0;
    cin >> r >> c;
    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
           if(i%2 == 0)
           {
            cout << "#";
           } else
           {
            if((i/2) % 2 == 0 && j == c-1)
            {
                cout << "#";
            }else if((i/2) % 2 == 1 && j==0)
            {
                cout << "#";
            }else
            {
                cout << ".";
            }
           }
        }
        cout << endl;
    }
}