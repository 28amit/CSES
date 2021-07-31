//
// Created by Amit.
//
#include <bits/stdc++.h>
#define MOD 1000000007
#define endl '\n'
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
using namespace std;

bool comp(vector<int> a, vector<int> b)
{
    if (a[0] == b[0])
        return a[1] > b[1];
    return a[0] < b[0];
}

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
    vector<vector<int> > v(n, vector<int>(3));
    vector<pair<bool, bool> > ans(n);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        v[i][0] = l;
        v[i][1] = r;
        v[i][2] = i;
    }
    sort(v.begin(), v.end(), comp);
    int maxr = INT_MAX;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i][1] >= maxr)
            ans[v[i][2]].first = true;
        maxr = min(maxr, v[i][1]);
    }
    maxr = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i][1] <= maxr)
            ans[v[i][2]].second = true;
        maxr = max(maxr, v[i][1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i].first << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << ans[i].second << " ";
    }
}