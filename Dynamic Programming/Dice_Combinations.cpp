//
// Created by Amit.
//
#include "bits/stdc++.h"
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
    int n;
    cin >> n;
    vector<int> dp(n + 1,0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=6;j++){
            if((i-j)>=0)
                dp[i]=(dp[i]+dp[i-j])%MOD;
        }
    }
    cout << dp[n];
}