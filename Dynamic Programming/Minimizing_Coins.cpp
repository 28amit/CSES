//
// Created by Amit.
//
#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
#define sort(a) sort(a.begin(), a.end())
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
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> dp(s + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= s; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i - v[j] >= 0)
            {
                dp[i] = min(dp[i], dp[i - v[j]] + 1);
            }
        }
    }
    if (dp[s] == INT_MAX)
    {
        cout << -1;
    }
    else
        cout << dp[s];
}