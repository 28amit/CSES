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
vector<pair<int, int> > v;
void solve(int a, int b, int c, int n)
{
    if (n == 1)
    {
        // cout << a << " " << c << endl;
        v.push_back({a, c});
        return;
    }
    solve(a, c, b, n - 1);
    // cout << a << " " << c << endl;
    v.push_back({a, c});
    solve(b, a, c, n - 1);
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
    int a = 1;
    int b = 2;
    int c = 3;
    solve(a, b, c, n);
    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }
}