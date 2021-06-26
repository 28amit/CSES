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
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int oddCount = 0;
    char oddChar;
    for (auto i : mp)
    {
        if (i.second % 2 != 0)
        {
            oddCount++;
            if (oddCount > 1 || (oddCount == 1 && (s.size() % 2 == 0)))
            {
                cout << "NO SOLUTION";
                return 0;
            }
            oddChar = i.first;
        }
    }
    string first = "";
    string second = "";
    for (auto i : mp)
    {
        string s(i.second / 2, i.first);
        first += s;
        second = s + second;
    }
    if (oddCount == 1)
    {
        cout << first + oddChar + second;
    }
    else
    {
        cout << first + second;
    }
}