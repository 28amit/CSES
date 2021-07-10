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

    // 0 3 2 5 1 4
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> pos(n + 1);
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pos[v[i]] = i;
    }
   
    swap(pos[2],pos[3]);
    for (int i = 2; i <= n; i++)
    {
        if (pos[i] < pos[i - 1])
        {
            ans++;
        }
    }
    cout << ans;
}