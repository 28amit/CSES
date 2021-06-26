//
// Created by Amit.
//
#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define sort(a) sort(a.begin(, a.end()))
#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

int32_t main()
{
#ifndef ONLINE_JUDGE
    /* code */
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            if (x % 2 != 0)
            {
                x--;
                cout << (x * x) + y << endl;
            }
            else
            {
                cout << (x * x) - y + 1 << endl;
            }
        }
        else
        {
            if (y % 2 != 0)
            {
                cout << (y * y) + 1 - x << endl;
            }
            else
            {
                y--;
                cout << (y * y) + x << endl;
            }
        }
    }
}