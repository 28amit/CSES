//
// Created by Amit.
//
#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
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
    int n, m, tmp;
    //3 5 5 7 8
    //8 7 5 5 3

    cin >> n >> m;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        s.insert(tmp);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        auto it = s.upper_bound(tmp);
        if (it == s.begin())
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << *(--it) << endl;
            s.erase(it);
        }
    }
}