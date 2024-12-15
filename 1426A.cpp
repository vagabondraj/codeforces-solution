//  1426A   ---->>  Floor Number  <<----

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void work()
{
    int n,x;
    cin >> n >> x;
    int remainning_aprt = n-2;
    int floor_no =1;
    while(remainning_aprt > 0)
    {
        remainning_aprt-=x;
        floor_no;
    }
    cout << floor_no << endl;
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




// << ---- Java code ----  >>

import java.util.*;

public class Main {

    public static void work(int n, int x, Scanner sc)
    {
        int re_aprt = n-2;
        int floor_no = 1;

        while(re_aprt > 0)
        {
            re_aprt-=x;
            floor_no++;
        }
        System.out.println(floor_no);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0)
        {
            int n = sc.nextInt();
            int x = sc.nextInt();
            work(n,x,sc);
        }
        sc.close();
    }
}