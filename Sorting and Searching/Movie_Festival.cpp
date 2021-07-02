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

    //5 3
    //8 5
    //9 4
    // 2
    //8

    int n, start, end, currentEnd = -1, ans = 0;
    cin >> n;
    vector<pair<int, int> > v;

    for (int i = 0; i < n; i++)
    {
        cin >> start >> end;
        v.push_back(make_pair(end, start));
    }
    sort(v);
    for (int i = 0; i < n; i++)
    {
        if (v[i].second >= currentEnd)
        {
            ans++;
            currentEnd = v[i].first;
        }
    }
    cout << ans;
}