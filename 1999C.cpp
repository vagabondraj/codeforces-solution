//  1999C  ---->>  Showering  <<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    ll n,s,m;
    cin >> n >> s >> m;
    int a[n][2];
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin >> a[i][j];
        }
    }

    if(a[0][0] >= s)
    {
        cout << "YES" << endl;
        return;
    }

    if( (m-a[n-1][1]) >= s)
    {
        cout << "YES" << endl;
        return;
    }

    
    for(int i=0; i<n-1; i++)
    {
        if(a[i+1][0] - a[i][1] >= s )
        {
            cout << "YES" << endl;
            return;
        }
    }    
    cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        work();
    }
    return 0;
}




// ----->>>>  Java code  <<<<-----

import java.util.*;

public class Main {
    public static void work(int n, int s, int m, Scanner sc)
    {   
        int[][] arr = new int[n][2];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }

        if(arr[0][0] >= s)
        {
            System.out.println("YES");
            return;
        }

        if(m-arr[n-1][1] >=s)
        {
            System.out.println("YES");
            return;
        }

        for(int i=0; i<n-1; i++)
        {
            if(arr[i+1][0] - arr[i][1]  >= s)
            {
                System.out.println("YES");
                return;
            }
        }

        System.out.println("NO");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt(),s=sc.nextInt(),m = sc.nextInt();
            work(n,s,m,sc);
        }
       sc.close();
    }
}