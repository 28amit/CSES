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
            swap(x, y);
        }
        if (2 * x < y)
        {
            cout << "NO" << endl;
        }
        else
        {
            x = x % 3;
            y = y % 3;
            if (x > y)
                swap(x, y);
            if ((x == 0 && y == 0) || (x == 1 and y == 2))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
}