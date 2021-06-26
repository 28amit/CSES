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

int total = 0;
set<string> v;

string s;

void permute(int l, int r)
{
    // base case
    if (l == r)
    {
        v.insert(s);
    }

    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        permute(l + 1, r);
        swap(s[l], s[i]);
    }
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
    cin >> s;
    permute(0, s.size() - 1);
    cout << v.size() << endl;
    for (string i : v)
    {
        cout << i << endl;
    }
}