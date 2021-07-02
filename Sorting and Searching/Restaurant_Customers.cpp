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

    //2 3 5
    //4 9 8
    //2

    int n, tmp1, tmp2, tmp3 = 0;
    cin >> n;
    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp1 >> tmp2;
        v.push_back(make_pair(tmp1, 1));
        v.push_back(make_pair(tmp2, -1));
    }
    int ans = 0;
    // 1 -1 1 -1 1 -1
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        tmp3 += v[i].second;
        ans = max(ans, tmp3);
    }
    cout << ans;
}