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
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1);
    vector<int> pos(n + 1);
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pos[v[i]] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (pos[i] < pos[i - 1])
        {
            ans++;
        }
    }
    set<pair<int, int> > p;
    int l, r;
    while (m--)
    {
        cin >> l >> r;
        if (v[l] + 1 <= n)
            p.insert({v[l], v[l]+1});
        if (v[l] - 1 >= 1)
            p.insert({v[l]-1, v[l]});
        if (v[r] + 1 <= n)
            p.insert({v[r], v[r]+1});
        if (v[r] - 1 >= 1)
            p.insert({v[r]-1, v[r]});
        for (auto i : p)
        {
            if (pos[i.first] > pos[i.second])
                ans--;
        }

        swap(v[l], v[r]);
        pos[v[l]] = l;
        pos[v[r]] = r;
        for (auto i : p)
        {
            if (pos[i.first] > pos[i.second])
                ans++;
        }
        cout<<ans<<endl;
        p.clear();
    }
    
}