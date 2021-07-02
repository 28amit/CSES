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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    //45 60 60 80
    //30 60 75
    sort(a);
    sort(b);
    int ans = 0, i = 0, j = 0;

    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
        { //Found a suitable apartment for the applicant
            i++;
            j++; //Move to the next one.
            ++ans;
        }
        else
        {
            if (a[i] - b[j] > k)
            {
                //If the desired apartment size of the applicant is too big
                //Move the "apartment" pointer to the right to find a bigger one
                j++;
            }
            else
            {
                //If the desired apartment size is too small
                //Skip that applicant and move to the next person
                i++;
            }
        }
    }

    cout << ans;
}