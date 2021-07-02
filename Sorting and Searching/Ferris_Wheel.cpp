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

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    // 2 3 7 9
    // t    t  t
    //1+1+
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v);
    int i = 0, j = n - 1;
    int ans = 0;
    vector<bool> check(n);
    while (i < j)
    {
        if (v[i] + v[j] <= x)
        {
            check[i] = true;
            check[j] = true;
            i++;
            j--;
            ans++;
        }
        else
        {

            check[j] = true;
            j--;
            ans++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (check[i] == false)
        {
            ans++;
        }
    }
    cout << ans;
}