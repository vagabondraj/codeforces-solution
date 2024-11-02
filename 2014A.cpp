# include<bits/stdc++.h>
using namespace std;

void robin()
{
    int n,k;
    cin >> n >> k;
    int goldTaken=0,goldGiven =0;
    for(int i=0; i<n; i++)
    {
        int have;
        cin >> have;
        if(have >= k)
        {
            goldTaken+=have;
        }else if(have == 0 && goldTaken != 0)
        {
           goldTaken--;
           goldGiven++;
        }
    }
    cout << goldGiven << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        robin();
    }
    return 0;
}