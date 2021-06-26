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
    int total = (n * (n + 1)) / 2;
    if (total % 2 != 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        vector<int> v1;
        vector<int> v2;
        if (n % 4 == 0)
        {
            int tmp = n / 4;
            for (int i = 1; i <= tmp; i++)
            {
                v1.push_back(i);
            }
            for (int i = n; i > n - tmp; i--)
            {
                v1.push_back(i);
            }
            for (int i = tmp + 1; i <= n - tmp; i++)
            {
                v2.push_back(i);
            }
        }
        else
        {
            //1 2 3 4 5 6 7 8 9 10 11
            int tmp = (n - 3) / 4;
            v1.push_back(1);
            v1.push_back(2);
            v2.push_back(3);
            for (int i = 4; i <= tmp + 3; i++)
            {
                v1.push_back(i);
            }
            for (int i = n; i > n - tmp; i--)
            {
                v1.push_back(i);
            }
            for (int i = tmp + 4; i <= n - tmp; i++)
            {
                v2.push_back(i);
            }
        }
        cout << v1.size() << endl;
        for (int i : v1)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (int i : v2)
        {
            cout << i << " ";
        }
    }
}